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
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace 맛집API해보기
{
    public partial class Form1 : Form
    {
        ucFolder.DaeguAll uc1 = new ucFolder.DaeguAll();
        ucFolder.SuseongAll uc2 = new ucFolder.SuseongAll();
        ucFolder.DongguAll uc3 = new ucFolder.DongguAll();
        public Form1()
        {
            InitializeComponent();
        }

        #region 옛날코드
        //private void button1_Click(object sender, EventArgs e)
        //{
        //    List<Good> goods = new List<Good>();
        //    int count = 0;
        //    string[] matjips = new string[] { "중구", "동구" };
        //    //https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=%EC%A4%91%EA%B5%AC
        //    //"https://www.daegufood.go.kr/kor/api/Alley_food.html?mode=json&OPENDATA_ID=TL-11"
        //    WebClient wc = new WebClient();
        //    wc.Encoding = Encoding.UTF8;

        //    var json = wc.DownloadString("https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=%EC%A4%91%EA%B5%AC");

        //    var jArray =  JObject.Parse(json) ;
        //    var jarr = jArray["data"];
        //    var total = jArray["total"];

        //    while (count<int.Parse(total.ToString()))
        //    {
        //        // using 영역이 끝나면 wc의 메모리가 자동 해체됨
        //        //using (WebClient wc = new WebClient())
        //        //{
        //            wc.Encoding = Encoding.UTF8;

        //            //var json
        //            //    = wc.DownloadString("https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=%EC%A4%91%EA%B5%AC");
        //            //var jArray = JObject.Parse(json);
        //            //var jarr = jArray["data"];

        //            Good temp = new Good(
        //                jarr[count]["cnt"].ToString(),
        //                jarr[count]["OPENDATA_ID"].ToString(),
        //                jarr[count]["GNG_CS"].ToString(),
        //                jarr[count]["FD_CS"].ToString(),
        //                jarr[count]["BZ_NM"].ToString(),
        //                jarr[count]["MNU"].ToString(),
        //                jarr[count]["SMPL_DESC"].ToString(),
        //                jarr[count]["MBZ_HR"].ToString());
        //            count++;

        //            goods.Add(temp);
        //        //}
        //    }
        //    dataGridView1.DataSource = null;
        //    dataGridView1.DataSource = goods;
        //}
        #endregion

        //데이터를 저장할 리스트
        //List<GoodMatJip> goodmatjips = new List<GoodMatJip>();

        ////데이터를 가져오고 처리하는 메서드
        //private void FetchData(string selectedMatjip)
        //{
        //    // WebClient는 IDisposable을 구현하므로 using문을 사용하여 리소스를 올바르게 해제
        //    using (WebClient wc = new WebClient())
        //    {
        //        wc.Encoding = Encoding.UTF8;

        //        try
        //        {
        //            //API에서 데이터를 가져오는 URL
        //            string apiUrl = "https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=" + selectedMatjip;

        //            //JSON 형식의 데이터를 문자열로 다운로드
        //            string json = wc.DownloadString(apiUrl);



        //            //JSON데이터 파싱
        //            var jArray = JObject.Parse(json);
        //            var jarr = jArray["data"];
        //            var total = jArray["total"];

        //            int count = 0;

        //            //JSON 데이터를 Good 객체로 변환하여 List에 추가
        //            while (count < int.Parse(total.ToString()))
        //            {
        //                GoodMatJip temp = new GoodMatJip(
        //                    jarr[count]["cnt"].ToString(),
        //                    jarr[count]["BZ_NM"].ToString(),
        //                    jarr[count]["OPENDATA_ID"].ToString(),
        //                    jarr[count]["GNG_CS"].ToString(),
        //                    jarr[count]["FD_CS"].ToString(),
        //                    jarr[count]["MNU"].ToString().Replace("<br />", ", "),
        //                    jarr[count]["SMPL_DESC"].ToString(),
        //                    jarr[count]["MBZ_HR"].ToString());

        //                goodmatjips.Add(temp);
        //                count++;
        //            }

        //            //DataGridView 업데이트
        //            UpdateDataGridView();
        //        }
        //        catch (Exception ex)
        //        {
        //            Console.WriteLine("데이터 가져오기 또는 파싱 오류: " + ex.Message);
        //            // 예외처리: 로깅이나 사용자에게 알림 등을 추가할 수 있음
        //        }
        //    }
        //}

        ////DataGridView를 스레드에 안전하게 업데이트 하는 메서드
        //private void UpdateDataGridView()
        //{
        //    if (dataGridView1.InvokeRequired)
        //    {
        //        //스레드 안전한 방식으로 DataGridView 업데이트
        //        dataGridView1.Invoke(new Action(UpdateDataGridView));
        //    }
        //    else
        //    {
        //        // DataGridView의 데이터를 초기화하고 goods 리스트를 할당하여 바인딩
        //        dataGridView1.DataSource = null;
        //        dataGridView1.DataSource = goodmatjips;
        //        dataGridView1.ResetBindings();
        //    }
        //}

        //private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        //{
        //    //선택된 맛집 주소를 가져와서 데이터 갱신
        //    string selectedMatjip = comboBox1.Text;

        //    // 이전 데이터를 지우고 새로운 데이터를 가져옴
        //    // 이전 데이터 초기화
        //    goodmatjips.Clear();
        //    FetchData(selectedMatjip);
            #region 옛날코드2
            //List<Good> goods = new List<Good>();

            //int count = 0;
            //string[] matjips = new string[] { "중구", "수성구", "남구", "동구", "북구", "서구", "달서구", "달성군" };

            //WebClient wc = new WebClient();
            //wc.Encoding = Encoding.UTF8;
            //for (int i = 0; i < matjips.Length; i++)
            //{
            //    if (comboBox1.Text == matjips[i])
            //    {
            //        var json = wc.DownloadString("https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=" + matjips[i]);
            //        var jArray = JObject.Parse(json);
            //        var jarr = jArray["data"];
            //        var total = jArray["total"];

            //        wc.Encoding = Encoding.UTF8;

            //        while (count < int.Parse(total.ToString()))
            //        {
            //            Good temp = new Good(
            //                    jarr[count]["cnt"].ToString(),
            //                    jarr[count]["BZ_NM"].ToString(),
            //                    jarr[count]["OPENDATA_ID"].ToString(),
            //                    jarr[count]["GNG_CS"].ToString(),
            //                    jarr[count]["FD_CS"].ToString(),
            //                    jarr[count]["MNU"].ToString().Replace("<br />", ", "),
            //                    jarr[count]["SMPL_DESC"].ToString(),
            //                    jarr[count]["MBZ_HR"].ToString());
            //            count++;

            //            goods.Add(temp);
            //        }
            //        dataGridView1.DataSource = null;
            //        dataGridView1.DataSource = goods;
            //    }
            //}
            #endregion
        //}


        private void button1_Click(object sender, EventArgs e)
        {
            string[] matjips = new string[] {"중구","수성구","남구","동구","서구","북구","달서구","달성군" };

            for(int i = 0; i< matjips.Length; i++)
            {
                //FetchData(matjips[i]);
                using (WebClient wc = new WebClient())
                {
                    wc.Encoding = Encoding.UTF8;

                    try
                    {
                        //API에서 데이터를 가져오는 URL
                        string apiUrl = "https://www.daegufood.go.kr/kor/api/tasty.html?mode=json&addr=" + matjips[i];

                        //JSON 형식의 데이터를 문자열로 다운로드
                        string json = wc.DownloadString(apiUrl);



                        //JSON데이터 파싱
                        var jArray = JObject.Parse(json);
                        var jarr = jArray["data"];
                        var total = jArray["total"];

                        int count = 0;

                        //JSON 데이터를 Good 객체로 변환하여 List에 추가
                        while (count < int.Parse(total.ToString()))
                        {

                            DBHelper.insertData(jarr[count]["cnt"].ToString(),
                                jarr[count]["OPENDATA_ID"].ToString(), 
                                jarr[count]["GNG_CS"].ToString(),
                                jarr[count]["FD_CS"].ToString(),
                                jarr[count]["BZ_NM"].ToString(),
                                jarr[count]["TLNO"].ToString(),
                                jarr[count]["MBZ_HR"].ToString(),
                                jarr[count]["PKPL"].ToString(),
                                jarr[count]["HP"].ToString(),
                                jarr[count]["BKN_YN"].ToString(),
                                jarr[count]["INFN_FCL"].ToString(),
                                jarr[count]["MNU"].ToString(),
                                jarr[count]["SMPL_DESC"].ToString(),
                                jarr[count]["SEAT_CNT"].ToString(),
                                jarr[count]["SBW"].ToString(),
                                jarr[count]["PSB_FRN"].ToString(),
                                jarr[count]["BUS"].ToString(),
                                jarr[count]["BRFT_YN"].ToString(),
                                jarr[count]["DSSRT_YN"].ToString());
                            //GoodMatJip temp = new GoodMatJip(
                            //    jarr[count]["cnt"].ToString(),
                            //    jarr[count]["BZ_NM"].ToString(),
                            //    jarr[count]["OPENDATA_ID"].ToString(),
                            //    jarr[count]["GNG_CS"].ToString(),
                            //    jarr[count]["FD_CS"].ToString(),
                            //    jarr[count]["MNU"].ToString().Replace("<br />", ", "),
                            //    jarr[count]["SMPL_DESC"].ToString(),
                            //    jarr[count]["MBZ_HR"].ToString());

                            //goodmatjips.Add(temp);
                            count++;
                        }

                        //DataGridView 업데이트
                        //UpdateDataGridView();
                    }
                    catch (Exception ex)
                    {
                        Console.WriteLine("데이터 가져오기 또는 파싱 오류: " + ex.Message);
                        // 예외처리: 로깅이나 사용자에게 알림 등을 추가할 수 있음
                    }
                }
                //foreach (GoodMatJip gs in goodmatjips)
                //{
                //    DBHelper.insertData(gs);
                //}
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Controls.Add(uc1);
            uc1.BringToFront();
            
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Controls.Add(uc2);
            uc2.BringToFront();
        }
    }
}


