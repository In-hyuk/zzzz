using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml;

namespace 문제풀기
{
    internal class Transport : IRiderable, IFlierable
    {
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
