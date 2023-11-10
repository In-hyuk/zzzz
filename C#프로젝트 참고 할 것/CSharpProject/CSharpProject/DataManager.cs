using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharpProject
{
    
    public class DataManager
    {
        public static List<Product> Products = new List<Product>();

        static DataManager()
        {
            Load();
        }
        public static void Load()
        {
            try
            {
                DBHelper.selectQuery(); // 전체 조회를 한다.
                Products.Clear();
                foreach (DataRow item in DBHelper.dt.Rows)
                {
                    Product product = new Product();
                    product.Cg_Code = item["Cg_Code"].ToString();
                    product.Cg_Name = item["Cg_Name"].ToString();
                    product.Inven_Name= item["Inven_Name"].ToString();
                    product.Inven_Barcode = item["Inven_Barcode"].ToString();
                    product.Inven_Company = item["Inven_Company"].ToString();
                    product.Inven_Kcal = item["Inven_Kcal"].ToString();
                    product.재고 = item["Inven_Cnt"].ToString();
                   
                    Products.Add(product);
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
                Console.WriteLine(e.StackTrace);

            }
        }
    }
}
