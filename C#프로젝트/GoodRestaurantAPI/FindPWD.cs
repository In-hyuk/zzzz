using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GoodRestaurantAPI
{
    public partial class FindPWD : Form
    {
        public FindPWD()
        {
            InitializeComponent();
            // 폼에 KeyDown 이벤트 핸들러 등록
            this.KeyPreview = true;
            this.KeyDown += FormEvent.CloseFormOnEscKey;
            // 텍스트 박스에 TextChanged 이벤트 핸들러 등록
            FPWDName_textBox.TextChanged += FNametextBox_TextChanged;
            FPWDQ_textBox.TextChanged += FQtextBox_TextChanged;
        }
        // 텍스트 박스의 TextChanged 이벤트 핸들러
        private void FNametextBox_TextChanged(object sender, EventArgs e)
        {
            // 입력된 글자 수가 10자를 초과하면 마지막 10자를 자름
            if (FPWDName_textBox.Text.Length > 10)
            {
                FPWDName_textBox.Text = FPWDName_textBox.Text.Substring(0, 10);
                FPWDName_textBox.SelectionStart = FPWDName_textBox.Text.Length;
                FPWDName_textBox.SelectionLength = 0;
            }
        }

        // 텍스트 박스의 TextChanged 이벤트 핸들러
        private void FQtextBox_TextChanged(object sender, EventArgs e)
        {
            // 입력된 글자 수가 10자를 초과하면 마지막 10자를 자름
            if (FPWDQ_textBox.Text.Length > 10)
            {
                FPWDQ_textBox.Text = FPWDQ_textBox.Text.Substring(0, 10);
                FPWDQ_textBox.SelectionStart = FPWDQ_textBox.Text.Length;
                FPWDQ_textBox.SelectionLength = 0;
            }
        }


        // 취소 버튼 눌렀을 때
        private void CancelFPWDbutton_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        // 확인 버튼 눌렀을 때
        private void FNCheckbutton_Click(object sender, EventArgs e)
        {
            try
            {
                // 비밀번호 찾기 (질문 기반)
                string findPWD = DBUserHelper.FindUserPWDByQues(FPWDName_textBox.Text,FPWDQ_textBox.Text);

                if (findPWD != null)
                {
                    MessageBox.Show($"비밀번호: {findPWD}");
                }
                else
                {
                    MessageBox.Show("비밀번호를 찾을 수 없습니다.");
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"오류: {ex.Message}");
            }

        }





    }
}
