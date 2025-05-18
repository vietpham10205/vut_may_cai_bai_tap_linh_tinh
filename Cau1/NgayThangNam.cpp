#include "NgayThangNam.h"
#include <iostream>
using namespace std;

void NgayThangNam::Nhap()
 {
    cout<< "nhap ngay thang nam: ";
    cin >> iNgay>> iThang>>iNam;
 }


void NgayThangNam::Xuat()
{
    cout << " Ngay Thang Nam la: ";
    cout << iNgay<< "/" << iThang<<"/" << iNam<<endl;
}
void NgayThangNam::NgayThangTiepTheo()
{
    int tg;    
            switch(iThang)
            {
            case 4:
            case 6:
            case 9:
            case 11:
                tg = 30;
                break;
            case 2:
                tg = 28 + ((iNam%4==0 && iNam%100) || (iNam%400==0));
                break;
            default:
                tg = 31;
            }
            iNgay = (iNgay%tg)+1;
            if(iNgay==1)
            {
            iThang = (iThang%12)+1;
            }

        cout<<"Ngay mai: "<<iNgay<<"/"<<iThang<<"/"<<iNam+(iThang==1 && iNgay==1)<<endl;
    
}