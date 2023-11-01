using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _231101_HelloCSharp05
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Animal a = new Animal();
            a.Age = 10;
            label1.Text = "나이: " + a.Age;
            a.Eat();
            a.Sleep();
            // a.Born(); -> protected 이므로 바깥에선 호출이 불가능
            // 바깥이란? Animal을 상속받지 않은 클래스를 의미
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Cat c = new Cat(); // Born이 호출됨
            c.Age = 5; // Animal에 있는 Age를 상속받았음
            label2.Text = "고양이 나이: " + c.Age;
            c.Eat();    // Animal에 있는 메서드 상속받음
            c.Sleep();  // Animal에 있는 메서드 상속받음
            c.Meow();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Dog d = new Dog();  // 생성자 안에서 자동으로 Born 호출됨
            d.Age = 17;
            d.color = "White";
            label3.Text = "개의 나이: " + d.Age + "\n";
            label3.Text += "개의 털 색깔: " + d.color;
            d.Eat();
            d.Sleep();
            d.Bark(); // 개 고유의 메서드

        }

        private void button4_Click(object sender, EventArgs e)
        {
            List<Animal> zoo = new List<Animal>();
            zoo.Add(new Animal());
            zoo.Add(new Animal());
            zoo.Add(new Dog());
            zoo.Add(new Dog());
            zoo.Add(new Cat());
            zoo.Add(new Cat());
            Animal a = new Animal();
            Animal b = new Cat();
            Animal c = new Dog();
            zoo.Add(a);
            zoo.Add(b);
            ((Cat)b).Meow();
            (b as Cat).Meow();
            zoo.Add(c);
            Cat d = new Cat();
            Dog d2 = new Dog();
            // foreach(Animal item in zoo)
            foreach(var item in zoo)
            {
                item.Eat();
                item.Sleep();
                if(item is Cat) // 타입체크 : is
                {
                    (item as Cat).Meow();   // 형변환 : as
                }
                if(item is Dog)
                {
                    (item as Dog).Bark();
                }
            }
        }

        private void button5_Click(object sender, EventArgs e)
        {
            // 다형성
            // 왼쪽 = 오른쪽의 관계가 (오른쪽 is 왼쪽)
            // 핸드폰 s = new 스마트폰();
            // 스마트폰 is 핸드폰 (O)
            // 핸드폰 is 스마트폰(X), 누군가는 아직 피처폰을 쓴다!

            Cat cat = new Cat();
            Dog dog = new Dog();

            Animal a = new Dog();   // Dog is Anmial
            Animal b = new Cat();   // Cat is Animal

            a.Age = 1;
            a.Eat();
            a.Sleep();
            ((Dog)a).Bark();    // OK
            //((Dog)b).Bark();    // b는 Cat 이므로 무작정 형변환시 오류가 난다.
            // 밑에거 3개는 다 안나옴. b는 Cat 이니까
            if(b is Dog)
            {
                ((Dog)b).Bark(); 
            }
            if(b is Dog)
            {
                (b as Dog).Bark();
            }
            var test = b as Dog;
            if(test != null)
            {
                test.Bark();
            }

            List<Animal> animals = new List<Animal>()
            {
                new Dog(),new Cat(),new Dog()
            };
            foreach(var item in animals)
            {
                item.Eat();
                item.Sleep();
                if (item is Dog)
                    (item as Dog).Bark();
                if (item is Cat)
                    (item as Cat).Meow();
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            // Age는 인스턴스 별로 다들 각자 다름
            // count는 Age, Dog, Cat이 공유하고 있음
            Cat cat = new Cat();
            Dog dog = new Dog();
            Animal animal = new Animal();
            cat.Age = 5;
            dog.Age = 7;
            animal.Age = 50;
            Cat.count++;
            Dog.count++;
            Animal.count++;
            MessageBox.Show("count값: " + Animal.count);
            MessageBox.Show("count값: " + Cat.count);
            MessageBox.Show("count값: " + Dog.count);
        }

        private void button7_Click(object sender, EventArgs e)
        {
            new Animal().Wash();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            Cat c = new Cat();
            c.Wash();
            (c as Animal).Wash();
        }

        private void button9_Click(object sender, EventArgs e)
        {
            new Dog().Wash();
        }
    }
}
