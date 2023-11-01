using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 인스턴스_클래스변수
{
    public class GameCharacter
    {
        public string id { get; set; }
        public static int theNumberOfUser = 0;
        
        public GameCharacter()
        {
            theNumberOfUser++;
        }
        public GameCharacter(string id)
        {
            this.id = id;
            theNumberOfUser++;
        }
    }
}
