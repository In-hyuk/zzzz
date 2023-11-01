using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231101_HelloCSharp05
{
    public class Cat:Animal
    {

        public Cat() // Animal을 상속받았으므로 호출 가능
        {
            Born(); 
        } 
        public void Meow()
        {
            Console.WriteLine("야옹");
        }

        public override void Wash()
        {
            // base.Wash(); Animal 에 있는 Wash 그대로 호출
            Console.WriteLine("물이 싫어서 씻기가 힘들다.");
        }
    }
}
