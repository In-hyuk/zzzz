using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCSharp07_01_chap12
{
    public class Weather
    {
        public string hour {  get; set; }
        public string day { get; set; }
        public string wkfor {  get; set; }
         

        public override string ToString()
        {
            return "시간 : " + hour + ", 날 : " + day + ", 날씨 : " + wkfor;
        }
    }
}
