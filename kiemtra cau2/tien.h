#pragma once
#include <iostream>
using namespace std;

class tien
{
    private:
    int dong;
    public:
    tien(){}
    tien(int a)
    {
        dong=a;
        
    }
    friend istream& operator >> (istream &is, tien &a)
    {
        cout<<"Nhap so tien: ";
        is>> a.dong;
        return is;
    }
    friend ostream& operator<< (ostream& os, const tien& b)
    {
        os<<b.dong<<" dong"<<endl;
        return os;
    }
    tien operator+(tien a)
    {
        tien ketqua;
        ketqua.dong= this->dong+ a.dong;
        return ketqua;
    }
    tien operator-(tien a)
    {
        tien ketqua;
        ketqua.dong= this->dong- a.dong;
        return ketqua;
    }
     tien operator++()
    {
        this->dong++;
        return *this;
    }
    tien operator--()
    {
        this->dong--;
        return *this;
    }
};