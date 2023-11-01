using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp01_03
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("안녕하세요"[0]);
            Console.WriteLine("안녕하세요."[5]);
            Console.WriteLine('가' + '힣');

            double cm;
            Console.Write("몇 인치인가요? ");
            double inch = double.Parse(Console.ReadLine());
            cm = inch * 2.54;
            Console.WriteLine(cm + "cm");

            double pound;
            Console.Write("몇 kg? ");
            double kg = double.Parse(Console.ReadLine());
            pound = kg * 2.20462262;
            Console.WriteLine(pound + "pound");

            // int.Parse : 공백을 비롯하여 숫자를 입력하지 않으면 튕김
            // 이를 보완한 것이 int.TryParse
            // 엉뚱한 값을 입력해도 튕기지 않고 0을 집어넣음
            // int.TryParse(Console.ReadLine(), out input);
            // int.TryParse(Console.ReadLine(), out int r);
            
            Console.WriteLine("원의 반지름을 입력해주세요.");
            int r = int.Parse(Console.ReadLine());
            // 상수
            const double PI = 3.14; // java의 final이랑 같은 것
            double area = r * r * PI;
            Console.WriteLine("원의 넓이 : " + area);
            double round = r * 2 * PI;
            Console.WriteLine("원의 둘레 : " + round);

          
        }
    }
}
