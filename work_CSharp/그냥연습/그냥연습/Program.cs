using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 그냥연습
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] s = { "Jim", "Sam", "Kim", "Park" };

            foreach (string x in s)
            {
                Console.WriteLine(x);
            }
        }
    }
}
