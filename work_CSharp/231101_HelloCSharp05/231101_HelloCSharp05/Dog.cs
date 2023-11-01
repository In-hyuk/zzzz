using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231101_HelloCSharp05
{
    public class Dog : Animal
    {
        public Dog() { Born(); }
        public string color { get; set; }
        public void Bark()
        {
            Console.WriteLine("멍멍");
        }
    }
}
