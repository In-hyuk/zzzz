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
    public partial class FindID : Form
    {
        public FindID()
        {
            InitializeComponent();
            // 폼에 KeyDown 이벤트 핸들러 등록
            this.KeyPreview = true;
            this.KeyDown += FormEvent.CloseFormOnEscKey;
            // 텍스트 박스에 TextChanged 이벤트 핸들러 등록
            FIDName_textBox.TextChanged += FNametextBox_TextChanged;
        }

        // 텍스트 박스의 TextChanged 이벤트 핸들러
        private void FNametextBox_TextChanged(object sender, EventArgs e)
        {
            // 입력된 글자 수가 8자를 초과하면 마지막 8자를 자름
            if (FIDName_textBox.Text.Length > 8)
            {
                FIDName_textBox.Text = FIDName_textBox.Text.Substring(0, 8);
                FIDName_textBox.SelectionStart = FIDName_textBox.Text.Length;
                FIDName_textBox.SelectionLength = 0;
            }
        }


        // 취소 버튼 눌렀을때
        private void CancelFIDbutton_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        // 확인 버튼 눌렀을때
        private void FNCheckbutton_Click(object sender, EventArgs e)
        {
            try
            {
                // 아이디 찾기
                string findIdByName = DBUserHelper.FindUserIdByName(FIDName_textBox.Text);
                if(findIdByName != null)
                {
                    MessageBox.Show($"아이디 : {findIdByName}");
                }
                else
                {
                    MessageBox.Show("아이디를 찾을수 없습니다!");
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show($"오류: {ex.Message}");

            }
           

        }

    }
}
