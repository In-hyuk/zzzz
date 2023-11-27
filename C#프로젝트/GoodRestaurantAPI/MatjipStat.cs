using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GoodRestaurantAPI
{
    public partial class MatjipStat : UserControl
    {
        public MatjipStat()
        {
            InitializeComponent();

            List<string> x = new List<string> { "달성군", "달서구", "동구", "서구", "남구", "중구", "북구", "수성구" };
            List<double> y1 = new List<double> { 3045, 7023, 4750, 2759, 2583, 3399, 6019, 5229 };
            List<double> y2 = new List<double> { 97, 169, 133, 59, 65, 184, 123, 134 };
            List<string> x1 = new List<string> { "한식", "중식", "일식", "양식", "세계요리", "퓨전/뷔페", "디저트/베이커리", "전통차", "특별한술집" };
            List<double> y3 = new List<double> { 715, 33, 44, 43, 30, 10, 58, 24, 7 };

            Matjip_chart.Titles.Add("대구 구별 식당 및 맛집 갯수와 카테고리별 맛집 갯수");
            Matjip_chart.Titles[0].Font = new Font("Arial", 16, FontStyle.Bold);
            Matjip_chart.Series[0].Name = "식당 갯수";
            Matjip_chart.ChartAreas[0].BackColor = SystemColors.Control;
            Matjip_chart.Series[0].Points.DataBindXY(x, y1);
            
            Matjip_chart.ChartAreas.Add("ChartArea2");
            Matjip_chart.Series.Add("맛집 갯수");
            Matjip_chart.Series[1].ChartArea = "ChartArea2";
            Matjip_chart.ChartAreas[1].BackColor = SystemColors.Control;
            Matjip_chart.Series[1].Points.DataBindXY(x, y2);
           
            Matjip_chart.ChartAreas.Add("ChartArea3");
            Matjip_chart.Series.Add("카테고리 별 맛집 갯수");
            Matjip_chart.Series[2].ChartArea = "ChartArea3";
            Matjip_chart.ChartAreas[2].BackColor = SystemColors.Control;
            Matjip_chart.Series[2].Points.DataBindXY(x1, y3);

            // 막대 그래프마다 값 나오게
            Matjip_chart.Series[0].IsValueShownAsLabel = true;
            Matjip_chart.Series[1].IsValueShownAsLabel = true;
            Matjip_chart.Series[2].IsValueShownAsLabel = true;

            // 그래프 격자 제거
            Matjip_chart.ChartAreas[0].AxisX.MajorGrid.Enabled = false;
            Matjip_chart.ChartAreas[0].AxisY.MajorGrid.Enabled = false;
            Matjip_chart.ChartAreas[1].AxisX.MajorGrid.Enabled = false;
            Matjip_chart.ChartAreas[1].AxisY.MajorGrid.Enabled = false;
            Matjip_chart.ChartAreas[2].AxisX.MajorGrid.Enabled = false;
            Matjip_chart.ChartAreas[2].AxisY.MajorGrid.Enabled = false;

        }

    }
}
