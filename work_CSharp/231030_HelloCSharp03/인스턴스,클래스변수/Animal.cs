using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 인스턴스_클래스변수
{
    public class Animal
    {
        public string name{get; set;}

        public int age { get; set;}

        private int id; // 소문자

        public int Id { get { return id; } set { id = value; } }
        private string species;
        public string Species { get => species; set => species = value; }

        private string masterName;
        public string getMasterName()
        {
            return masterName;
        }
        public void setMasterName(string masterName)
        {
            this.masterName = masterName;
        }
    }
}
