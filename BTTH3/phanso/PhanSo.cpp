#include "PhanSo.h"
#include <iostream>
using namespace std;

PhanSo::PhanSo() : iTu(0), iMau(1) {}
PhanSo::PhanSo(int Tu, int Mau) : iTu(Tu), iMau(Mau) {}

PhanSo PhanSo::operator+(PhanSo a) 
{
    int TuMoi = iTu * a.iMau + a.iTu * iMau;
    int MauMoi = iMau * a.iMau;
    return PhanSo(TuMoi, MauMoi);
}

PhanSo PhanSo::operator-(PhanSo a) 
{
    int TuMoi = iTu * a.iMau - a.iTu * iMau;
    int MauMoi = iMau * a.iMau;
    return PhanSo(TuMoi, MauMoi);
}

PhanSo PhanSo::operator*(PhanSo a) 
{
    int TuMoi = iTu * a.iTu;
    int MauMoi = iMau * a.iMau;
    return PhanSo(TuMoi, MauMoi);
}

PhanSo PhanSo::operator/(PhanSo a)
{
    int TuMoi = iTu * a.iMau;
    int MauMoi = iMau * a.iTu;
    return PhanSo(TuMoi, MauMoi);
}

bool PhanSo::operator==(PhanSo a) 
{
    return (iTu * a.iMau == a.iTu * iMau);
}

bool PhanSo::operator!=(PhanSo a)
{
    return !(*this == a);
}

bool PhanSo::operator>=(PhanSo a)
{
    return (iTu * a.iMau >= a.iTu * iMau);
}

bool PhanSo::operator<=(PhanSo a) 
{
    return (iTu * a.iMau <= a.iTu * iMau);
}

bool PhanSo::operator>(PhanSo a)
{
    return (iTu * a.iMau > a.iTu * iMau);
}

bool PhanSo::operator<(PhanSo a)
{
    return (iTu * a.iMau < a.iTu * iMau);
}

istream& operator>>(istream& is, PhanSo& a) 
{
    cout << "Nhap Tu: ";
    is >> a.iTu;
    cout << "Nhap Mau: ";
    is >> a.iMau;
    return is;
}

ostream& operator<<(ostream& os, PhanSo a)
{
    os << a.iTu << "/" << a.iMau;
    return os;
}
