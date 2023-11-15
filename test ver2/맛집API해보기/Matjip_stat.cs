using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Windows.Forms.DataVisualization.Charting;

namespace 맛집API해보기
{
    public partial class Matjip_stat : Form
    {
        private string connectionString; // 멤버 변수로 이동

        public Matjip_stat()
        {
            InitializeComponent();

            // 데이터베이스 연결 문자열 설정
            string dataSource = "local";
            string db = "GoodRestaurant"; // DB명
            string security = "SSPI";
            connectionString = $"Data Source=({dataSource}); Initial Catalog={db};" +
                               $"Integrated Security={security}; Timeout=3";

            // 폼이 로드될 때 데이터베이스에서 데이터를 가져와 차트를 업데이트합니다.
            LoadChartData(chart1, "FD_CS");
            LoadAddressChartData(chart2, "GNG_CS");
        }

        private void LoadChartData(Chart chart, string columnName)
        {
            string query = $"SELECT {columnName} FROM RestaurantData";

            Dictionary<string, int> dataCounts = new Dictionary<string, int>();

            using (SqlConnection connection = new SqlConnection(connectionString))
            {
                connection.Open();

                using (SqlCommand command = new SqlCommand(query, connection))
                {
                    using (SqlDataReader reader = command.ExecuteReader())
                    {
                        while (reader.Read())
                        {
                            string data = reader.GetString(0);
                            string gu = GetGuFromAddress(data);

                            if (dataCounts.ContainsKey(gu))
                            {
                                dataCounts[gu]++;
                            }
                            else
                            {
                                dataCounts[gu] = 1;
                            }
                        }
                    }
                }
            }

            var sortedDataCounts = dataCounts.OrderByDescending(pair => pair.Value);

            if (chart.Series.IndexOf(columnName) == -1)
            {
                chart.Series.Add(columnName);
            }

            foreach (var dataCount in sortedDataCounts)
            {
                chart.Series[columnName].Points.AddXY(dataCount.Key, dataCount.Value);
            }

            chart.Series[columnName].IsVisibleInLegend = false;
            chart.Legends.Clear();

            // 격자 제거
            chart.ChartAreas[0].AxisX.MajorGrid.Enabled = false;
            chart.ChartAreas[0].AxisY.MajorGrid.Enabled = false;

            // 막대그래프 색상 변경 (예: 빨간색)
            chart.Series[columnName].Color = Color.DarkKhaki;

            // 레이블 간격 및 각도 조절
            chart.ChartAreas[0].AxisX.LabelStyle.Interval = 1;
            chart.ChartAreas[0].AxisX.LabelStyle.Angle = -45;
        }

        private void LoadAddressChartData(Chart chart, string columnName)
        {
            string query = $"SELECT {columnName} FROM RestaurantData";

            Dictionary<string, int> dataCounts = new Dictionary<string, int>();

            using (SqlConnection connection = new SqlConnection(connectionString))
            {
                connection.Open();

                using (SqlCommand command = new SqlCommand(query, connection))
                {
                    using (SqlDataReader reader = command.ExecuteReader())
                    {
                        while (reader.Read())
                        {
                            string data = reader.GetString(0);
                            string gu = GetGuFromAddress(data);

                            if (dataCounts.ContainsKey(gu))
                            {
                                dataCounts[gu]++;
                            }
                            else
                            {
                                dataCounts[gu] = 1;
                            }
                        }
                    }
                }
            }

            var sortedDataCounts = dataCounts.OrderByDescending(pair => pair.Value);

            if (chart.Series.IndexOf(columnName) == -1)
            {
                chart.Series.Add(columnName);
            }

            foreach (var dataCount in sortedDataCounts)
            {
                chart.Series[columnName].Points.AddXY(dataCount.Key, dataCount.Value);
            }

            chart.Series[columnName].IsVisibleInLegend = false;
            chart.Legends.Clear();

            // 격자 제거
            chart.ChartAreas[0].AxisX.MajorGrid.Enabled = false;
            chart.ChartAreas[0].AxisY.MajorGrid.Enabled = false;

            // 막대그래프 색상 변경 (예: 빨간색)
            chart.Series[columnName].Color = Color.Gray;

            // 레이블 간격 및 각도 조절
            chart.ChartAreas[0].AxisX.LabelStyle.Interval = 1;
            chart.ChartAreas[0].AxisX.LabelStyle.Angle = -45;
        }

        private string GetGuFromAddress(string address)
        {
            string[] addressParts = address.Split(' ');
            if (addressParts.Length >= 2)
            {
                return addressParts[1];
            }
            else
            {
                return address;
            }
        }
    }
}