using System.Data.SqlClient;
using System.Data;
using System.Windows.Forms;
using System;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;
using System.Xml.Linq;
using GoodRestaurantAPI;

namespace GoodRestaurantAPI
{
    public partial class Sign_Up : Form
    {
        public Sign_Up()
        {
            InitializeComponent();
            // 폼에 KeyDown 이벤트 핸들러 등록
            this.KeyPreview = true;
            this.KeyDown += FormEvent.CloseFormOnEscKey;
            // 텍스트 박스에 TextChanged 이벤트 핸들러 등록
            SignUpID_textBox.TextChanged += IDtextBox_TextChanged;
            SignUpPWD_textBox.TextChanged += PWDtextBox_TextChanged;
            SignUpName_textBox.TextChanged += NametextBox_TextChanged;
            SignUpQues_textBox.TextChanged += QuestextBox_TextChanged;
        }
        // 텍스트 박스의 TextChanged 이벤트 핸들러
        private void IDtextBox_TextChanged(object sender, EventArgs e)
        {
            // 입력된 글자 수가 10자를 초과하면 마지막 10자를 자름
            if (SignUpID_textBox.Text.Length > 10)
            {
                SignUpID_textBox.Text = SignUpID_textBox.Text.Substring(0, 10);
                SignUpID_textBox.SelectionStart = SignUpID_textBox.Text.Length;
                SignUpID_textBox.SelectionLength = 0;
            }
        }

        // 텍스트 박스의 TextChanged 이벤트 핸들러
        private void PWDtextBox_TextChanged(object sender, EventArgs e)
        {
            // 입력된 글자 수가 10자를 초과하면 마지막 10자를 자름
            if (SignUpPWD_textBox.Text.Length > 10)
            {
                SignUpPWD_textBox.Text = SignUpPWD_textBox.Text.Substring(0, 10);
                SignUpPWD_textBox.SelectionStart = SignUpPWD_textBox.Text.Length;
                SignUpPWD_textBox.SelectionLength = 0;
            }
        }

        // 텍스트 박스의 TextChanged 이벤트 핸들러
        private void NametextBox_TextChanged(object sender, EventArgs e)
        {
            // 입력된 글자 수가 10자를 초과하면 마지막 10자를 자름
            if (SignUpName_textBox.Text.Length > 10)
            {
                SignUpName_textBox.Text = SignUpName_textBox.Text.Substring(0, 10);
                SignUpName_textBox.SelectionStart = SignUpName_textBox.Text.Length;
                SignUpName_textBox.SelectionLength = 0;
            }
        }

        // 텍스트 박스의 TextChanged 이벤트 핸들러
        private void QuestextBox_TextChanged(object sender, EventArgs e)
        {
            // 입력된 글자 수가 10자를 초과하면 마지막 10자를 자름
            if (SignUpQues_textBox.Text.Length > 10)
            {
                SignUpQues_textBox.Text = SignUpQues_textBox.Text.Substring(0, 10);
                SignUpQues_textBox.SelectionStart = SignUpQues_textBox.Text.Length;
                SignUpQues_textBox.SelectionLength = 0;
            }
        }
        private void Cancelbutton_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void DCheckbutton_Click(object sender, EventArgs e)
        {
            string userId = SignUpID_textBox.Text;

            if (string.IsNullOrEmpty(userId))
            {
                ShowMessageBox("아이디를 입력하세요.", "경고", MessageBoxIcon.Warning);
                return;
            }

            try
            {
                int userCount = DBUserHelper.CheckUserIdExists(userId);

                if (userCount > 0)
                {
                    ShowMessageBox("이미 존재하는 아이디입니다.", "경고", MessageBoxIcon.Warning);
                }
                else
                {
                    ShowMessageBox("사용 가능한 아이디입니다.", "알림", MessageBoxIcon.Information);
                }
            }
            catch (Exception ex)
            {
                ShowMessageBox("오류 발생: " + ex.Message, "오류", MessageBoxIcon.Error);
            }
            
        }

        private void Checkbutton_Click(object sender, EventArgs e)
        {
            string userId = SignUpID_textBox.Text;
            string password = SignUpPWD_textBox.Text;

            if (string.IsNullOrEmpty(userId) || string.IsNullOrEmpty(password))
            {
                ShowMessageBox("아이디와 비밀번호를 모두 입력하세요.", "경고", MessageBoxIcon.Warning);
                return;
            }

            try
            {
               
                DBUserHelper.RegisterUser(userId, password, SignUpName_textBox.Text, SignUpQues_textBox.Text);
                ShowMessageBox("회원가입이 완료되었습니다.", "성공", MessageBoxIcon.Information);
                this.Close();
            }
            catch (Exception ex)
            {
                ShowMessageBox("오류 발생: " + ex.Message, "오류", MessageBoxIcon.Error);
            }
           
            
        }

        private void ShowMessageBox(string message, string caption, MessageBoxIcon icon)
        {
            MessageBox.Show(message, caption, MessageBoxButtons.OK, icon);
        }

    }
}