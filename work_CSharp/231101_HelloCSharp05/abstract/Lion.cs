using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 추상연습
{
    public class Lion : Cat
    {
        public override void Eat()
        {
            Console.WriteLine("어흥냠냠");

        }
        public override void grooming()
        {
            Console.WriteLine("귀찮아서안함");
        }

        public override void hunt()
        {
            Console.WriteLine("달려가서 사냥");
        }

        public override void Sleep()
        {
            Console.WriteLine("계속 잠만 잠.");
        }
    }
}
