using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 문제풀기
{
    public class Dron : IFlierable
    {
        public void fly()
        {
            MessageBox.Show("위이잉~");
        }
    }
}
