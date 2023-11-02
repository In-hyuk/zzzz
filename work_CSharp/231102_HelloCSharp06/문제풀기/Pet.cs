using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 문제풀기
{
    public class Pet : GameCharacter, IFlierable, IRiderable
    {
        public override void fight()
        {
            Console.WriteLine("싸우다");
        }

        public void fly()
        {
            Console.WriteLine("날다");
        }

        public void run()
        {
            Console.WriteLine("뛰다");
        }

        public void stop()
        {
            Console.WriteLine("멈추다");
        }
    }
}
