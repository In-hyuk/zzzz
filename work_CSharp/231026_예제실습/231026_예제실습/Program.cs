using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _231026_예제실습
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 피라미드 만들기
            for (int i = 1; i <= 5; i++)
            {
                for (int j = 1; j <= 5 - i; j++)
                {
                    Console.Write(" ");
                }
                for (int j = 1; j <= 2 * i - 1; j++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
            // 마름모 만들기
            for (int i = 5; i >= 1; i--)
            {
                for (int j = 1; j <= 5 - i; j++)
                    Console.Write(" ");
                for (int j = 1; j <= 2 * i - 1; j++)
                    Console.Write("*");
                Console.WriteLine();
            }

            // 5개의 숫자를 입력받은 뒤 가장 작은 수와 가장 큰 수를 출력하는 프로그램을 작성하시오.
            int Max = 0;
            int Min = 0;
            int input = 0;

            Console.Write("숫자를 입력해주세요: ");
            input = int.Parse(Console.ReadLine());

            Max = input;
            Min = input;

            for (int i = 0; i < 4; i++)
            {

                Console.Write("숫자를 입력해주세요: ");
                input = int.Parse(Console.ReadLine());

                if (Max < input)
                {
                    Max = input;
                }

                else if (Min > input)
                {
                    Min = input;
                }

            }

            Console.WriteLine("-----------------");
            Console.WriteLine("가장 큰 수: " + Max);
            Console.WriteLine("가장 작은 수: " + Min);          

            // 수열 규칙 찾아서 20번째 숫자 구하는 프로그램 만들기
            string Ant = "1";

            for (int i = 2; i < 21; i++)
            {

                string dn = "";
                
                char number = Ant[0];
                int N = 0;

                for (int j = 0; j < Ant.Length; j++)
                {

                    if (number != Ant[j])
                    {
                        dn = dn + number + N;
                        number = Ant[j];
                        N = 1;
                    }

                    else
                    {
                        N++;
                    }

                }
                Ant = dn + number + N;
            }
            Console.WriteLine("20번째 수열 : " + Ant);

            // 로또 번호 생성?
            int[] lotto = new int[6];
            int num, cnt = 0;
            Random rand = new Random();

            for (int k = 0; k < 5; k++)
            {
                cnt = 0;
                while (cnt < 6)
                {
                    int r = rand.Next(1, 46);
                    for (num = 0; num < cnt; num++) // 이미 생성된 개수 만큼 반복
                        if (lotto[num] == r) break;
                    if (cnt == num) lotto[cnt++] = r;
                }
                Array.Sort(lotto);

                for (num = 0; num < 6; num++)
                    Console.Write("{0,2}  ", lotto[num]);
                Console.WriteLine();
            }

            // 12지신 전부 출력
            
            string[] arr = { "경", "신", "임", "계", "갑", "을", "병", "정", "무", "기" };
            string[] arr1 = { "신", "유", "술", "해", "자", "축", "인", "묘", "진", "사", "오", "미" };
    
            Console.WriteLine("년도 입력: ");
            int y = int.Parse(Console.ReadLine());
           
            Console.WriteLine(y + "년 : " + arr[y % 10] + arr1[y % 12] + "년");           

        }
    }
}
