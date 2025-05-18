#pragma once
#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class NgayThangNam
{
    private:
        int iNgay;
        int iThang;
        int iNam;
    public:
        NgayThangNam();
        NgayThangNam (int Ngay,int Thang, int Nam  );
        int TinhNgay();
        friend istream & operator>>(istream & x,NgayThangNam & y); //Nhap()
	    friend ostream & operator<<(ostream & x,const NgayThangNam & y); //Xuat() 
        NgayThangNam operator+(int  ngay  );
        NgayThangNam operator-( int ngay );
        NgayThangNam operator- (const NgayThangNam & );
        NgayThangNam &operator++();
        NgayThangNam &operator--();
        bool operator==(const NgayThangNam & );
        bool operator!=(const NgayThangNam & );
        bool operator<=(const NgayThangNam & );
        bool operator>=(const NgayThangNam & );
        bool operator<(const NgayThangNam & );
        bool operator>(const NgayThangNam & );
};

