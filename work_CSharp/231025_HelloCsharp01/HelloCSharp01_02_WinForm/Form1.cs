using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HelloCSharp01_02_WinForm
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            // mbox 적고 tab tab -> 잽싸게 tab tab 두번 눌러야되는듯 천천히 하니까 딴거 뜸
            MessageBox.Show(textBox1.Text);

        }

        private void button2_Click(object sender, EventArgs e)
        {
            int num1 = int.Parse(textBox2.Text);
            // ctrl + d 누르면 줄 복사 됨
            int num2 = int.Parse(textBox3.Text);
            MessageBox.Show("두 값의 합 " + num1 + " + " + num2 + " = " + (num1+num2));
        }

        private void button3_Click(object sender, EventArgs e)
        {
            int num1 = int.Parse(textBox4.Text);
            int num2 = int.Parse(textBox5.Text);
            MessageBox.Show("두 값의 차 " + num1 + " - " + num2 + " = " + (num1-num2));
        }

        private void button4_Click(object sender, EventArgs e)
        {
            int num1 = int.Parse(textBox6.Text);
            int num2 = int.Parse(textBox7.Text);
            MessageBox.Show("두 값의 곱 " + num1 + " * " + num2 + " = " + (num1 * num2));
        }

        private void button5_Click(object sender, EventArgs e)
        {
            int num1 = int.Parse(textBox8.Text);
            int num2 = int.Parse(textBox9.Text);
            MessageBox.Show("두 값의 몫 " + num1 + " / " + num2 + " = " + (num1 / num2));
        }

        private void button6_Click(object sender, EventArgs e)
        {
            int num1 = int.Parse(textBox10.Text);
            int num2 = int.Parse(textBox11.Text);
            MessageBox.Show("두 값의 나머지 " + num1 + " % " + num2 + " = " + (num1 % num2));
        }

        private void button7_Click(object sender, EventArgs e)
        {
            int num1 = int.Parse(textBox2.Text);
            int num2 = int.Parse(textBox3.Text);
            MessageBox.Show("두 값의 합 " + num1 + " + " + num2 + " = " + (num1 + num2));
            MessageBox.Show(string.Format("두 값의 합({0}+{1}):{2}", num1, num2, num1 + num2));
            MessageBox.Show($"두 값의 합({num1}+{num2}):{num1+num2}");
        }
    }
}
