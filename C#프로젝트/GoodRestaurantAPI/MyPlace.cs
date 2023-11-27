using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace GoodRestaurantAPI
{
    public partial class MyPlace : UserControl
    {
        public MyPlace()
        {
            InitializeComponent();
            User_label.Text = DBUserHelper.GetCurrentUserId() + "님의 즐겨찾기";
        }
       
        private void Delete_button_Click(object sender, EventArgs e)
        {
            DeleteSelectedRow();
        }

        //데이터그리드뷰에 나타내는 메서드
             
       public void BindMyPlaceData()
        {
            try
            {
                // MyPlace 테이블의 데이터 가져오기
                DataTable myPlaceData = DBMyPlaceHelper.GetMyPlaceData(DBUserHelper.GetCurrentUserId());
                MyPlace_dataGridView.DataSource = null;
                // DataGridView에 데이터 바인딩
                if(myPlaceData.Rows.Count >= 0 )
                    MyPlace_dataGridView.DataSource = myPlaceData;
                MyPlace_dataGridView.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
                MyPlace_dataGridView.Columns[0].HeaderText = "상호명";
                MyPlace_dataGridView.Columns[1].HeaderText = "카테고리";
                MyPlace_dataGridView.Columns[2].HeaderText = "주소";
                MyPlace_dataGridView.Columns[3].HeaderText = "전화번호";
               
            }
            catch (Exception ex)
            {
                MessageBox.Show($"데이터를 불러오는 중 오류가 발생했습니다: {ex.Message}", "오류", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        //삭제하는 메서드
        private void DeleteSelectedRow()
        {
            if (MyPlace_dataGridView.SelectedRows.Count > 0)
            {
                int selectedIndex = MyPlace_dataGridView.SelectedRows[0].Index;
                string userId = DBUserHelper.GetCurrentUserId();

                try
                {
                    // 해당 행을 데이터베이스에서도 삭제
                    string bz_nm = MyPlace_dataGridView.SelectedRows[0].Cells["BZ_NM"].Value.ToString(); // BZ_NM에 해당하는 셀의 값을 가져옴
                    DBMyPlaceHelper.DeleteMyPlace(userId, bz_nm); // 데이터베이스에서 삭제하는 메소드 호출

                    // DataGridView에서 선택된 행 삭제
                    MyPlace_dataGridView.Rows.RemoveAt(selectedIndex);
                }
                catch (Exception ex)
                {
                    MessageBox.Show($"삭제 중 오류가 발생했습니다: {ex.Message}", "오류", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
        }

 
    }
}

