using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 추상연습
{
    public class DomesticCat : Cat
    {
        public string masterName {  get; set; }
        public override void Eat()
        {
            Console.WriteLine(masterName + "가 먹여줘요");
        }

        public override void grooming()
        {
            Console.WriteLine(masterName + "가 빗겨줘요");
        }

        public override void hunt()
        {
            Console.WriteLine(masterName + "가 주는것만 먹어요");
        }

        public override void Sleep()
        {
            Console.WriteLine(masterName + "가 재워줍니다.");
        }
    }
}
