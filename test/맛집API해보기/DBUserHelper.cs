using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.SqlClient;
using System.Data;

namespace 맛집API해보기
{
    public static class DBUserHelper
    {
        private static SqlConnection conn = new SqlConnection();
        private const string TABLENAME = "information"; // 테이블명

        // DB 연동하는 메소드
        public static void ConnectDB()
        {
            string dataSource = "local";
            string db = "User_info"; // DB명
            string security = "SSPI";
            conn.ConnectionString =
                $"Data Source=({dataSource}); initial Catalog={db};" +
                $"integrated Security={security};" +
                "Timeout=3";

            if (conn.State != ConnectionState.Open)
                conn.Open();
        }

        
        public static void CloseConnection()
        {
            if (conn.State == ConnectionState.Open)
                conn.Close();
        }

        // 아이디 중복 체크
        public static int CheckUserIdExists(string userId)
        {
            ConnectDB();
            try
            {
                string checkUserQuery = $"SELECT COUNT(*) FROM {TABLENAME} WHERE User_ID = @UserId";
                using (SqlCommand checkUserCommand = new SqlCommand(checkUserQuery, conn))
                {
                    checkUserCommand.Parameters.AddWithValue("@UserId", userId);
                    return (int)checkUserCommand.ExecuteScalar();
                }
            }
            finally
            {
                CloseConnection();
            }
        }

        // 회원가입
        public static void RegisterUser(string userId, string password, string username, string userQues)
        {
            try
            {
                if (CheckUserIdExists(userId) > 0)
                {
                    Console.WriteLine("이미 존재하는 아이디입니다.");
                    return;
                }

                ConnectDB();
                string insertQuery = $"INSERT INTO {TABLENAME} (User_ID, User_PassWord, User_Name, User_Ques) VALUES (@UserId, @Password, @Username, @UserQues)";
                using (SqlCommand insertCommand = new SqlCommand(insertQuery, conn))
                {
                    insertCommand.Parameters.AddWithValue("@UserId", userId);
                    insertCommand.Parameters.AddWithValue("@Password", password);
                    insertCommand.Parameters.AddWithValue("@Username", username);
                    insertCommand.Parameters.AddWithValue("@UserQues", userQues);

                    int rowsAffected = insertCommand.ExecuteNonQuery();

                    if (rowsAffected <= 0)
                    {
                        Console.WriteLine("회원가입에 실패하였습니다.");
                    }
                }
            }
            finally
            {
                CloseConnection();
            }
        }
        // 로그인
        public static bool Login(string userId, string password)
        {
            ConnectDB();
            try
            {
                string loginQuery = $"SELECT COUNT(*) FROM {TABLENAME} WHERE User_ID = @UserId AND User_PassWord = @Password";
                using (SqlCommand loginCommand = new SqlCommand(loginQuery, conn))
                {
                    loginCommand.Parameters.AddWithValue("@UserId", userId);
                    loginCommand.Parameters.AddWithValue("@Password", password);

                    int userCount = (int)loginCommand.ExecuteScalar();
                    return userCount > 0;
                }
            }
            finally
            {
                CloseConnection();
            }
        }



    }
}
