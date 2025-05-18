#include "PhanSo.h"
#include <iostream>
using namespace std;
 
PhanSo::PhanSo()
{
   
}
 
PhanSo::PhanSo(int a, int b)
{
    iTu = a;
    if (b != 0)
    {
        iMau = b;
    }
    else
    {
        iMau = 1;
    }
}
 // PhanSo a = new PhanSo(1,2)
 // PhanSo b = new PhanSo(1,2)
  // c = a.Tong(b)
void PhanSo::Nhap()
{
    cout << "\tNhap tu So: "; cin >> iTu;
    cout << "\tNhap mau so: "; cin >> iMau;
}
 
void PhanSo::Xuat()
{
    cout << iTu << "/" << iMau << "\n"; 
}
    
int PhanSo::UCLN(int a, int b) { if (a==0 ||b==0) return a+b; while (a !=b) { if(a>b)
                    a=a-b;
                else
                    b=b-a;
            }
            return a;
        }
 
 
void PhanSo::RutGon()
{
    int iUCLN = UCLN(iTu, iMau);
    iTu = iTu / iUCLN;
    iMau = iMau / iUCLN;
}
 
PhanSo PhanSo::Tong(const PhanSo &b)
{
    return PhanSo((this->iTu*b.iMau) + (this->iMau*b.iTu),this->iMau*b.iMau);
}
 
PhanSo PhanSo::Hieu(const PhanSo &b)
{
      return PhanSo(((this->iTu*b.iMau) - (this->iMau*b.iTu)),this->iMau*b.iMau);
}
 
PhanSo PhanSo::Tich(const PhanSo &b) 
{
     return PhanSo(this->iTu*b.iTu,this->iMau*b.iMau);
}
 
PhanSo PhanSo::Thuong(const PhanSo &b)
{
    return PhanSo(this->iTu*b.iMau,this->iMau*b.iTu);
}
 
int PhanSo::SoSanh(const PhanSo &b)
{
    float x = (float)this->iTu / this->iMau;
    float y = (float)b.iTu / b.iMau;
    if (x < y) return -1;
    else if (x > y) return 1;
     
    return 0;
}
 
