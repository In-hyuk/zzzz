using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Drawing.Text;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 맛집API해보기.ucFolder
{

    public partial class DaeguAll : UserControl
    {

        private List<GoodMatJip> matjip = new List<GoodMatJip>();
        public DaeguAll()
        {
            InitializeComponent();

            string dataSource = "local";
            string db = "GoodRestaurant";
            string security = "SSPI";
            string connectionString = $"Data Source=({dataSource}); initial Catalog={db};" +
                    $"integrated Security={security};" +
                    "Timeout=3";

            SqlConnection conn = new SqlConnection();
            conn.ConnectionString = connectionString;
            conn.Open();

            string sql = "select * from RestaurantData";
            SqlCommand cmd = new SqlCommand();
            cmd.CommandText = sql;
            cmd.Connection = conn;

            SqlDataAdapter da = new SqlDataAdapter();
            da.SelectCommand = cmd;

            DataSet ds = new DataSet();
            da.Fill(ds, "test");

            dataGridView1.DataSource = ds.Tables["test"];
            conn.Close();

            dataGridView1.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
        }

        private void button10_Click(object sender, EventArgs e)
        {
            Visible = false;
        }
    }
}

