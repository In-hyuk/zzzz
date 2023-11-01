using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 추상연습
{
    public abstract class Animal
    {
        public string Name { get; set; }
        public int Age { get; set; }

        // 메소드의 구현은 자손클래스에게 맡긴다.
        // 즉, 자손클래스는 의무적으로 오버라이딩을 해야 함
        public abstract void Eat();
        public abstract void Sleep();
    }
}
