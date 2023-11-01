using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231030_HelloCSharp03
{
    public partial class Form1 : Form
    {
        // Student class의 name과 같은 속성에 해당함
        string randomText = "안녕하세요? 이동준입니다. 반갑슨습니다!";

        // Java의 ArrayList
        // C#의 List가 Java의 ArrayList랑 사실상 똑같음
        List<string> nameList = new List<string>{"이동준", "이유나", "박영희"};
        List<int> ageList = new List<int> { 34, 24, 40 };
        List<int> ageList2 = new List<int>();

        // C#의 ArrayList는 Java의 ArrayList<Object>랑 동일
        // 즉 아무거나 다 들어가는 리스트이다.
        ArrayList TmiList = new ArrayList();

        public Form1() // 생성자
        {
            InitializeComponent();

            Button b = new Button();
            b.Text = "코드로 만든 버튼";
            b.AutoSize = true; // 글자가 길 경우 그에 따라 길이 늘어나는 거
            b.Location = new Point(10, 10);
            // Controls : Form1 안에 있는 모든 구성요소들(Button들 등)
            Controls.Add(b);    // Add 코드가 없으면 b는 화면에 안 보임!
        }

        // btn_test 클릭시 수행 할 함수
        private void btn_test_Click(object sender, EventArgs e)
        {
            checkBox1.Text += "!";
            Random r = new Random();
            checkBox2.Text = randomText[r.Next(randomText.Length)].ToString();

            if (checkBox1.Checked == true)
            {
                MessageBox.Show("체크됨");
            }
            else if(checkBox1.Checked == false)
            {
                MessageBox.Show("체크 안 됨");
            }         
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
                        
        }
    }
}
