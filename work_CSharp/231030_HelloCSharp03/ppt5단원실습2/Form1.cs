using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ppt5단원실습2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            List<Student> students = new List<Student>();
            students.Add(new Student() { name = "이동준", grade = 1 });
            students.Add(new Student() { name = "동준이", grade = 2 });
            students.Add(new Student() { name = "준동이", grade = 3 });
            students.Add(new Student() { name = "준준이", grade = 4 });
            students.Add(new Student() { name = "동동이", grade = 1 });
            students.Add(new Student() { name = "이이이", grade = 2 });

            for (int i = 0; i < students.Count; i++)
            {
                Label label = new Label();
                label.Text = $"{students[i].grade} 학년 {students[i].name} 학생";
                label.AutoSize = true;
                label.Location = new Point(13, 13 + (23 + 3) * i);
                Controls.Add(label);
            }

            // 뭔가를 삭제할 땐 역 for문을 써야 한다.
            // 그래야 IndexBoundError 나 IndexOverFlow에러가 나지 않는다.
            for (int i = students.Count - 1; i >= 0; i--) 
            {
                if (students[i].grade > 1)
                {
                    students.RemoveAt(i);
                }
            }
            for (int i = 0; i < students.Count; i++)
            {
                Label label = new Label();
                label.Text = $"{students[i].grade} 학년 {students[i].name} 학생";
                label.AutoSize = true;
                label.Location = new Point(130, 13 + (23 + 3) * i);
                Controls.Add(label);
            }

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            Hide(); // 뒤에 창 숨김
            new Form2().ShowDialog();
            Show(); // 뒤에 창 다시 나타남
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Hide(); // 뒤에 창 숨김
            new Form3().ShowDialog();
            Show(); // 뒤에 창 다시 나타남
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Hide(); // 뒤에 창 숨김
            new Form4().ShowDialog();
            Show(); // 뒤에 창 다시 나타남
        }

       
    }
}
