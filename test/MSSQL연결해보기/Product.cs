using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MSSQL연결해보기
{
    public class Product
    {
        public string 식품코드 { get; set; }
        public string 식품명 { get; set; }
        public string 영양성분함량기준량 { get; set; }     
        public string 에너지_kcal { get; set; }
        public string 단백질_g { get; set; }
        public string 지방_g { get; set; }
        public string 식품중량 { get; set; }
        public string 수입여부 { get; set; }
        public string 업체명 { get; set; }

    }
}
