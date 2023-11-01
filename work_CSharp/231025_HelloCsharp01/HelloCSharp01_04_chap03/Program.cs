using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Net.NetworkInformation;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp01_04_chap03
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 삼항 연산자
            // 물음표와 콜론을 통하여 조건문을 한 줄로 표현하는 것
            int num = int.Parse(Console.ReadLine());
            string result = num % 2 == 0 ? "짝" : "짝이 아님";
            // [수식] ? [그 수식이 참인 경우] : [그 수식이 거짓인 경우]
            Console.WriteLine(result);

            // if문

            // switch문
            switch (num)
            {
                case 0:
                    Console.WriteLine("num 값은 0!");
                    break;
                case 1:
                case 2:
                case 3:
                    Console.WriteLine("num은 1~3!!!");
                    break;
                case 4: // case 밑에 단 한 줄의 코드라도 있다면 그 밑에는 꼭 break 필요
                        // java나 c같은 경우에는 그 밑에 break 없어도 돌아는 갑니다.
                    Console.WriteLine("4");
                    break;
                case 5:
                    Console.WriteLine("5");
                    break;

                default:
                    break;
            }

            Console.WriteLine("안녕하세요".Contains("안녕"));
            Console.WriteLine("안녕하세요".Equals("안녕"));

            Console.WriteLine("태어난 년도 입력");
            int year = int.Parse(Console.ReadLine());
            if(year % 12 == 0)
            {
                Console.WriteLine("원숭이띠");
            }
            else if(year % 12 == 1)
            {
                Console.WriteLine("닭띠");
            }
            else if(year % 12 == 2)
            {
                Console.WriteLine("개띠");
            }
            else if(year % 12 == 3)
            {
                Console.WriteLine("돼지띠");
            }
            else if(year % 12 == 4)
            {
                Console.WriteLine("쥐띠");
            }
            else if(year % 12 == 5)
            {
                Console.WriteLine("소띠");
            }
            else if(year % 12 == 6)
            {
                Console.WriteLine("호랑이띠");
            }
            else if(year % 12 == 7)
            {
                Console.WriteLine("토끼띠");
            }
            else if(year % 12 == 8)
            {
                Console.WriteLine("용띠");
            }
            else if(year % 12 == 9)
            {
                Console.WriteLine("뱀띠");
            }
            else if(year % 12 == 10)
            {
                Console.WriteLine("말띠");
            }
            else if(year % 12 == 11)
            {
                Console.WriteLine("양띠");
            }

            int cur_year = DateTime.Now.Year;
            switch(cur_year % 12)
            {
                case 0:
                    Console.WriteLine("원숭이띠");
                    break;
                case 1:
                    Console.WriteLine("닭띠");
                    break;
                case 2:
                    Console.WriteLine("개띠");
                    break;
                case 3:
                    Console.WriteLine("돼지띠");
                    break;
                case 4:
                    Console.WriteLine("쥐띠");
                    break;
                case 5:
                    Console.WriteLine("소띠");
                    break;
                case 6:
                    Console.WriteLine("호랑이띠");
                    break;
                case 7:
                    Console.WriteLine("토기띠");
                    break;
                case 8:
                    Console.WriteLine("용띠");
                    break;
                case 9:
                    Console.WriteLine("뱀띠");
                    break;
                case 10:
                    Console.WriteLine("말띠");
                    break;
                case 11:
                    Console.WriteLine("양띠");
                    break;
                default:
                    break;
            }

            Console.WriteLine("몇 월? ");
            int month = int.Parse(Console.ReadLine());
            if(month == 1 || month == 2 || month == 12)
            {
                Console.WriteLine("겨울");
            }
            else if(month == 3 || month == 4 || month ==5) 
            {
                Console.WriteLine("봄");
            }
            else if(month >= 6 && month <= 8)
            {
                Console.WriteLine("여름");
            }
            else if (month > 8 && month <12) 
            {
                Console.WriteLine("가을");
            }
            else
            {
                Console.WriteLine("잘못된 날짜 입력!");
            }

            int cur_month = DateTime.Now.Month;
            switch (cur_month)
            {
                case 1:                    
                case 2:
                    Console.WriteLine("겨울");
                    break;
                case 3:                   
                case 4:                   
                case 5:
                    Console.WriteLine("봄");
                    break;
                case 6:                    
                case 7:
                case 8:
                    Console.WriteLine("여름");
                    break;
                case 9:                   
                case 10:                   
                case 11:
                    Console.WriteLine("가을");
                    break;
                case 12:
                    Console.WriteLine("겨울");
                    break;
                default:
                    break;
            }

            int sum = 0;
            for(int i =  1; i <= 100; i++)
            {
                sum += i;
            }
            Console.WriteLine(sum);

            for (char i = '가'; i <= '힣'; i++)
            {
                Console.Write(i);
            }

            int[] numbers = { 10, 20, 30, 40, 50 };
            Console.WriteLine("for문 결과");
            for (int i = 0; i< numbers.Length; i++)
            {
                Console.WriteLine(i);
                Console.WriteLine(numbers[i]);
            }
            Console.WriteLine("foreach문 결과");
            // i = numbers 안에 있는 값들 각각을 의미함
            // java의 for(int item : numbers)
            foreach (var i in numbers)
                Console.WriteLine(i);  
        }
    }
}
