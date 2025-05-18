#include "PhanSo.h"
#include "PhanSo.cpp"
#include <conio.h>
#include <iostream>
using namespace std;
 
int main()
{
    PhanSo ps1,ps2;
    cout << "Phan so 1:\n";
    ps1.Nhap();
    cout << "\tPhan so vua nhap:";
    ps1.Xuat();
    ps1.RutGon();
    cout << "\tPhan so rut gon:";
    ps1.Xuat();
 
    cout << "Phan so 2:\n";
    ps2.Nhap();
    cout << "\tPhan so vua nhap:";
    ps2.Xuat();
    ps2.RutGon();
    cout << "\tPhan so rut gon:";
    ps2.Xuat();
 
    PhanSo psTong = ps1.Tong(ps2);
    cout << "\nCong hai phan so: ";
    psTong.RutGon();
    psTong.Xuat();
    
    PhanSo psHieu = ps1.Hieu(ps2);
    cout << "\nTru hai phan so: ";
    
    psHieu.Xuat();
     
 
    PhanSo psTich = ps1.Tich(ps2);
    cout << "\nNhan hai phan so: ";
    psTich.RutGon();
    psTich.Xuat();
 
    PhanSo psThuong = ps1.Thuong(ps2);
    cout << "\nChia hai phan so: ";
    psThuong.RutGon();
    psThuong.Xuat();
 
    int ss = ps1.SoSanh(ps2);
    switch (ss)
    {
    case -1:
        cout << "\nPhan so 1 nho hon phan so 2";
        break;
    case 1:
        cout << "\nPhan so 1 lon hon phan so 2";
        break;
    case 0:
        cout << "\nPhan so 1 bang phan so 2";
        break;
    default:
        break;
    } 
         
    
 
   
     
 
    return 0; 
}