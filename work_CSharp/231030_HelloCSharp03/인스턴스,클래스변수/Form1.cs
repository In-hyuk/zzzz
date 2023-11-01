using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 인스턴스_클래스변수
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            Product.companyName = "경북산업마트";

            // 첫번째 방법 = 직접 대입
            Product p1 = new Product();
            p1.name = "마이크";
            p1.price = 90000;
            Product p2 = new Product();
            p2.name = "새콤달콤";
            p2.price = 500;
            Product p3 = new Product();
            p3.name = "새콤달콤";
            p3.price = 500;
            // 두번째 방법 = 선언과 동시에 값을 대입(생성자랑 관계없음)
            Product p4 = new Product() {name="바디워시", price =5000};
            // 세번째 방법 = 생성자를 활용하는 방법(자바랑 동일함)
            Student s1 = new Student(1, "이동준");


            Console.WriteLine(p2==p3); // 윈폼이라 ctrl+f5 하면 "출력" 안뜸 f5 눌러가 출력부분 보면 나오는듯
            //MessageBox.Show("Test " + (p2 == p3)); // 메모리 위치 비교 -> 내용 같아도 False

            Animal a = new Animal();
            a.setMasterName("이동준");
            Console.WriteLine(a.getMasterName());
            a.Species = "개"; // "개" = value
            Console.WriteLine(a.Species); // get으로 리턴
            a.Id = 1; // 1 = value
            Console.WriteLine(a.Id); // get 으로 id를 리턴
            a.name = "구구";
            a.age = 10;

            GameCharacter g1 = new GameCharacter();
            g1.id = "핑크퐁퐁유지웅";
            GameCharacter g2 = new GameCharacter("뿌잉뿌잉이동준");
            MessageBox.Show(GameCharacter.theNumberOfUser + "명");

            List<GameCharacter> list = new List<GameCharacter>();
            list.Add(g1);
            list.Add(g2);

            int i = 1;
            foreach(var item in list)
            {
                Label label = new Label();
                label.Text = item.id;
                label.Location = new Point(10, 10 + (100 * i));
                i++;
                Controls.Add(label);
            }
        }
    }
}
