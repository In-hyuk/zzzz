using Newtonsoft.Json.Linq;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 맛집API해보기
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            List<Good> goods = new List<Good>();
            
            while (true)
            {
                // using 영역이 끝나면 wc의 메모리가 자동 해체됨
                using (WebClient wc = new WebClient())
                {
                    var json
                        = wc.DownloadString("https://www.daegufood.go.kr/kor/api/Alley_food.html?mode=json&OPENDATA_ID=TL-11");
                    var jArray = JObject.Parse(json);

                    Good temp = new Good(
                        //jArray["cnt"].ToString(),
                        //jArray["OPENDATA"].ToString(),
                        //jArray["GNG_CS"].ToString(),
                        //jArray["FD_CS"].ToString(),
                        jArray["BZ_NM"].ToString());
                        //jArray["MNU"].ToString(),
                        //jArray["SMPL_DESC"].ToString(),
                        //jArray["MBZ_HR"].ToString());
                    goods.Add(temp);
                }
            }
            dataGridView1.DataSource = null;
            dataGridView1.DataSource = goods;
        }
    }
}
