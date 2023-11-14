using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml;
using System.Xml.Linq;

namespace naverAPI
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string query = textBox1.Text; // 검색할 문자열
            //string url = "https://openapi.naver.com/v1/search/shop?query=" + query; // JSON 결과
            string url = "https://openapi.naver.com/v1/search/shop.xml?query=" + query;  // XML 결과
            HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
            request.Headers.Add("X-Naver-Client-Id", "Sv_u9hRuaI7g6OyeA7KX"); // 클라이언트 아이디
            request.Headers.Add("X-Naver-Client-Secret", "yYqHKUxZhz");       // 클라이언트 시크릿
            HttpWebResponse response = (HttpWebResponse)request.GetResponse();
            string status = response.StatusCode.ToString();
            if (status == "OK")
            {
                Stream stream = response.GetResponseStream();
                StreamReader reader = new StreamReader(stream, Encoding.UTF8);
                string text = reader.ReadToEnd();
                Console.WriteLine(text);
            }
            else
            {
                Console.WriteLine("Error 발생=" + status);
            }



            //XElement xe = XElement.Load(url);
            //List<Data> list = (from item in xe.Descendants("item")
            //                   select new Data()
            //                   {
            //                       Name = item.Element("title").Value,
            //                       price = item.Element("lprice").Value,
            //                   }).ToList<Data>();
            //dataGridView1.DataSource = null;
            //dataGridView1.DataSource = list;
        }
    }
}
