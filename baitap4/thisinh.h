#pragma once
#include <string>
#include <iostream>
#include <string>
using namespace std;


class thisinh
{
    private:
        string Ten;
        int MSSV;
        int iNgay;
        int iThang;
        int iNam;
        float fToan;
        float fVan;
        float fAnh;
    public:
        void Nhap();
        void Xuat();
        float Tong(); 
};