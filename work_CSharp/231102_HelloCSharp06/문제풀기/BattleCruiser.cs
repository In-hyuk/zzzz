﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 문제풀기
{
    internal class BattleCruiser : IConveyancable
    {
        private string name;
        public string Name 
        { get => name; 
          set => name = value; }

        public void fly()
        {
            throw new NotImplementedException();
        }

        public void run()
        {
            throw new NotImplementedException();
        }

        public void stop()
        {
            throw new NotImplementedException();
        }
    }
}
