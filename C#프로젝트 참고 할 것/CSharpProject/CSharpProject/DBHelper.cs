using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CSharpProject
{
    public class DBHelper
    {
        private static SqlConnection conn = new SqlConnection();
        public static SqlDataAdapter da;
        public static DataSet ds;
        public static DataTable dt;
        //private const string TABLENAME = "C";   // 테이블명


        // DB 연결하는 메서드
        private static void ConnectDB()
        {
            string dataSource = "local";
            string db = "CntProgram";   // DB명
            string security = "SSPI";
            conn.ConnectionString = $"Data Source = ({dataSource}); initial Catalog = {db};" +
                $"integrated Security = {security};" +
                "Timeout=3";
            conn.Open();
        }

        public static void selectQuery()
        {

            ConnectDB(); // DB 연결
            SqlCommand cmd = new SqlCommand();
            cmd.Connection = conn;
            cmd.CommandText = "select * from Inventory,Category where Cg_code = Inven_Cg_Code";
            da = new SqlDataAdapter(cmd);   // 쿼리문을 활용하여 데이터 불러오는 것
            ds = new DataSet();
            da.Fill(ds,"l");         // ds에 테이블을 채워넣음
            dt = ds.Tables[0];              // 만약 여러개의 테이블을 불러왔다면 그 중 첫번재꺼 갖고옴

            conn.Close(); // DB 연결이 잘못되더라도 연결 끊어주는 건 꼭 해줌
        }
    }
}

