#include <iostream>
#include "sophuc.h"
#include<math.h>
#include<conio.h>
using namespace std;

sophuc::sophuc(float b,float c)
{
    dThuc=b;dAo=c;
}

sophuc::~sophuc(void)
{

}
float sophuc::dodai()
{
    return sqrt(dThuc*dThuc+dAo*dAo);
}

istream & operator>>(istream & x,sophuc & y)
{
	cout<<"Phan thuc: ";
	x>>y.dThuc; 
	cout<<"Phan ao: ";
	x>>y.dAo;
	return x;
}

ostream & operator<<(ostream & x,const sophuc & y)
{
	x<<y.dThuc<<"+"<<y.dAo<<"*i"; 
	return x;
}

sophuc operator+(const sophuc a,const sophuc b )
{
	 sophuc c;
    c.dThuc=a.dThuc+ b.dThuc;
    c.dAo=a.dAo+ b.dAo; 
    return c;
}
sophuc sophuc::operator-(const sophuc & x)
{
	 sophuc c;
    c.dThuc= this->dThuc-x.dThuc;
    c.dAo=this->dAo-x.dAo; 
    return c;
}
sophuc sophuc::operator*(const sophuc&x)
{
    sophuc c;
    c.dThuc=this->dThuc*x.dThuc-this->dAo*x.dAo;
    c.dAo=this->dThuc*x.dAo+this->dAo*x.dThuc;
    return c;
}
sophuc sophuc::operator/(const sophuc&x)
{
    sophuc c;
    c.dThuc=(this->dThuc*x.dThuc+this->dAo*x.dAo)/(x.dThuc*x.dThuc+x.dAo*x.dAo);
    c.dAo=(x.dThuc*this->dAo - this->dThuc*x.dAo)/(x.dThuc*x.dThuc+x.dAo*x.dAo);
    return c;
}
bool sophuc::operator==(sophuc&x)
{
    if(dodai()==x.dodai()) return true;return false;
}
bool sophuc::operator!=(sophuc&x)
{
    if(dodai()!=x.dodai()) return true;return false;
}