using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 맛집API해보기
{
    public partial class FindPWD : Form
    {
        public FindPWD()
        {
            InitializeComponent();
        }

        private void CancelFPWDbutton_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
