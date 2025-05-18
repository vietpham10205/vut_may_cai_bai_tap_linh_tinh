#pragma once
#include <iostream>

class PhanSo 
{
public:
    int iTu;
    int iMau;
    PhanSo();
    PhanSo(int Tu, int Mau = 1);
    PhanSo operator+(PhanSo a);
    PhanSo operator-(PhanSo a);
    PhanSo operator*(PhanSo a);
    PhanSo operator/(PhanSo a);
    bool operator==(PhanSo a);
    bool operator!=(PhanSo a);
    bool operator>=(PhanSo a);
    bool operator<=(PhanSo a);
    bool operator>(PhanSo a);
    bool operator<(PhanSo a);
    friend std::istream& operator>>(std::istream& is, PhanSo& a);
    friend std::ostream& operator<<(std::ostream& os, PhanSo a);
};



