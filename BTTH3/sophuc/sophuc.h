#pragma once
#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class sophuc
{
    private:
        float dThuc;
        float dAo;
    public:
        sophuc(float dThuc =0,float dAo =0);
        ~sophuc(void);
        float dodai();
        friend istream & operator>>(istream & x,sophuc & y); //Nhap()
	    friend ostream & operator<<(ostream & x,const sophuc & y); //Xuat()
         friend sophuc operator+(const sophuc a,const sophuc b );
         sophuc operator-(const sophuc &);
         sophuc operator*(const sophuc &);
         sophuc operator/(const sophuc &);
         bool operator==(sophuc&);
         bool operator!=(sophuc&);
};