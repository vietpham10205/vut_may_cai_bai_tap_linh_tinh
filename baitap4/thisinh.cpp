#include "thisinh.h"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

void thisinh::Nhap()
{cin.ignore();// bỏ vào trước khi dùng getline
    cout<<" Ten: ";
    
    getline(cin,Ten);
    cout<< " MSSV:  ";
    cin>> MSSV;
    cout<<"Ngay Thang Nam sinh:  ";
    cin >> iNgay>> iThang>>iNam;
    cout <<" Diem toan van anh lan luot la: ";
    cin>>fToan>>fVan>>fAnh;

}

void thisinh::Xuat()
{
    cout<<" Ten: ";
    cout<< Ten<<"\n";
    cout<< " MSSV:  ";
    cout<< MSSV<<"\n";
    cout<<"Ngay Thang Nam sinh:  ";
    cout << iNgay<< "/" << iThang<<"/" << iNam<<endl;
    cout <<" Diem toan van anh lan luot la: \n";
    cout <<"Toan: "<<fToan<< endl << "Van: "<<fVan<<endl << "Anh: "<<fAnh<<endl;
}
float thisinh::Tong()
{
    float tong=fToan+fVan+fAnh;
    
    return tong;
}