using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MSSQL연결해보기
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
                    product.식품코드 = item["식품코드"].ToString();
                    product.식품명 = item["식품명"].ToString();
                    product.영양성분함량기준량 = item["영양성분함량기준량"].ToString();
                    product.에너지_kcal = item["에너지_kcal"].ToString();
                    product.단백질_g = item["단백질_g"].ToString();
                    product.지방_g = item["지방_g"].ToString();
                    product.식품중량 = item["식품중량"].ToString();
                    product.수입여부 = item["수입여부"].ToString();
                    product.업체명 = item["업체명"].ToString();

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
