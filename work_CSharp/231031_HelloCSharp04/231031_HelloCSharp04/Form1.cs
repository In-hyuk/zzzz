using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231031_HelloCSharp04
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            Product p = new Product();
            p.price = 100;
            // p.name = ???  접근 제한자 입력하지 않으면 자동으로 private으로 되어 있어서.

            Dictionary<string,string> student = new Dictionary<string, string>();
            student["학번"] = "2009038033";
            student["이름"] = "이동준";
            student["성별"] = "남성";
            student["탈모여부"] = "약간 진행중인가...ㅠ";

            MessageBox.Show(student["학번"]);
            MessageBox.Show(student.ContainsKey("결혼여부") + "");
            MessageBox.Show(student.ContainsKey("탈모여부") + "");

            // List 같은 경우엔 "인덱스" 라는 게 있다.
            // 따지고 보면 키가 숫자인 Dictionary라고 볼 수도 있다.
            List<string> numbers = new List<string>();
            numbers.Add("이현오");
            numbers.Add("장광수");
            numbers.Add("이동준");
            MessageBox.Show(numbers[0]);

            // ArrayList같은 경우에도 "인덱스" 가 있다.
            // 다만 안에 들어가는 데이터의 형태를 제한하지 않는다.
        }

        void change(int num)
        {
            num = 1000;
        }

        void change(Product p)
        {
            p.price = 0;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int a = 10;
            int b = a;
            b = 200;
            // b가 값이 바뀌었다고 해서 a의 값이 바뀌지 않음
            label1.Text = "a = " + a + Environment.NewLine;
            label1.Text += "b = " + b + Environment.NewLine;
            change(a);  // 이 메소드는 a의 값을 복사만 한 것, 원본이랑 관계없음
            label1.Text += "a = " + a + Environment.NewLine;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Product product = new Product();
            product.price = 100;
            Product p2 = product;
            p2.price = 999;
            label2.Text = "prdouct의 price : " + product.price + "\n";
            change(product);
            label2.Text += "product의 price : " + product.price + "\n";

        }

        // ref 키워드 = 참조자
        // 해당 변수의 값 뿐 아니라 그 변수의 위치도 같이 가져오는 것
        // 따라서 swap에서 값이 바뀌면 swap 바깥에 있는 원본의 값이 바뀐다.
        void swap(ref int a, ref int b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        private void button_swap_Click(object sender, EventArgs e)
        {
            int a = int.Parse(textBox_1.Text);  // 3
            int b = int.Parse(textBox_2.Text);  // 5
            MessageBox.Show("a = " + a + " b = " + b);
            swap(ref a, ref b);
            label_1.Text = a + "";  // 5
            label_2.Text = b + "";  // 3
        }
    }
}
