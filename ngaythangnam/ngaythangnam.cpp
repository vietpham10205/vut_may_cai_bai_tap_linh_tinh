#include"ngaythangnam.h"
#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;

NgayThangNam::NgayThangNam()
{
iNgay=0;
iThang=0;
iNam=0;
}

NgayThangNam:: NgayThangNam(int Ngay,int Thang, int Nam )
{
    iNgay=Ngay;
    iThang=Thang;
    iNam=Nam;
}
int NgayThangNam::TinhNgay()
{
    int s;
    s = this->iNgay; 
    for(int i=1;i<this->iThang;i++)
    {
        switch(i)
        {
            case 4:
            case 6:
            case 9:
            case 11:
                s+=30;
                break;
            case 2:
                s+=28+((this->iNam%4==0 && this->iNam%100) || (this->iNam%400==0));
                break;
            default:
                s+=31;
        }
    }
    return s;
}
istream & operator>>(istream & x,NgayThangNam & y)
{
    cout<< "nhap ngay thang nam: ";
    x >>y.iNgay;
    x>>y.iThang;
    x>>y.iNam;
    return x;
}

ostream & operator<<(ostream & x,const NgayThangNam & y)
{
    x << y.iNgay<< "/" << y.iThang<<"/" << y.iNam;
    return x;
}
NgayThangNam NgayThangNam:: operator+(int ngay)
{
    NgayThangNam c;
     int tg;    
            switch(this->iThang)
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
            iNgay = (iNgay%tg)+ngay;
            if(iNgay==1)
            {
            iThang = (iThang%12)+1;
            }

        c.iNgay=iNgay;
        c.iThang=iThang;
        c.iNam=iNam+(iThang==1 && iNgay==1);
        return c;
}
NgayThangNam NgayThangNam:: operator-(int ngay)
{
     NgayThangNam c;
     int tg;    
            switch(this->iThang)
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
            iNgay = (iNgay%tg)-ngay;
            if(iNgay==1)
            {
            iThang = (iThang%12)+1;
            }

        c.iNgay=iNgay;
        c.iThang=iThang;
        c.iNam=iNam+(iThang==1 && iNgay==1);
        return c;
}

NgayThangNam NgayThangNam:: operator- (const NgayThangNam & b )
{
     NgayThangNam c;
     c.iNam= this->iNam- b.iNam;
     c.iThang= this->iThang- b.iThang;
     c.iNgay= this->iNgay-b.iNgay;
     return c;
}
 NgayThangNam &NgayThangNam::operator++()
{
    ++iNam;
    ++iNgay;
    ++iThang;
    return *this;
}
 NgayThangNam &NgayThangNam::operator--()
{
    --iNam;
    --iNgay;
    --iThang;
    return *this;
}
bool NgayThangNam::operator==(const NgayThangNam & b)
{
    return (this->iNam==b.iNam&&this->iThang==b.iThang&&this->iNgay==b.iNgay);
} 
bool NgayThangNam::operator!=(const NgayThangNam & b)
{
    return !(this->iNam==b.iNam&&this->iThang==b.iThang&&this->iNgay==b.iNgay);
} 
bool NgayThangNam::operator<=(const NgayThangNam & b)
{
    return (this->iNam<=b.iNam&&this->iThang<=b.iThang&&this->iNgay<=b.iNgay);
} 
bool NgayThangNam::operator>=(const NgayThangNam &b )
{
    return (this->iNam>=b.iNam&&this->iThang>=b.iThang&&this->iNgay>=b.iNgay);
} 
bool NgayThangNam::operator<(const NgayThangNam & b)
{
     return (this->iNam<b.iNam&&this->iThang<b.iThang&&this->iNgay<=b.iNgay );
} 
bool NgayThangNam::operator>(const NgayThangNam & b)
{
     return (this->iNam>b.iNam&&this->iThang>b.iThang&&this->iNgay>=b.iNgay );
} 