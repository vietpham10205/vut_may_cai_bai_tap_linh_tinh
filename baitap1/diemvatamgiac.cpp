#include "diemvatamgiac.h"
#include <iostream>
#include<math.h>
using namespace std;
 
 Diem::Diem()
 {
    iHoanh=0;
    iTung = 0;
 }
 Diem::Diem(float Hoanh, float Tung)
 {
    iHoanh=Hoanh;
    iTung = Tung;
 }

 Diem::Diem(const Diem & x)
 {
    this->iHoanh=x.iHoanh;
    this->iTung=x.iTung;
 }

 void Diem:: Xuat()
 {
    
    cout<< "("<<iHoanh<<";"<<iTung<<")"<<endl;

 }

 void Diem:: GetHoanhdo()
 {
    cout<<" Nhap Hoanh do: ";
    cin>>this->iHoanh;

 }
 void Diem::GetTungdo()
 {
    cout<<" Nhap Tung do: ";
    cin>>this->iTung;
 }
 void Diem::SetHoanhdo(float a)
 {
    this->iHoanh=this->iHoanh + a;
 }
 void Diem::SetTungdo(float b)
 {
    this->iTung=this->iTung + b;
 }
 void Diem::Tinhtien(float a, float b)
 {  

    SetHoanhdo (a);
    SetTungdo (b);
    cout <<" diem sau khi tinh tien la: ";
    Xuat();
 }
 float Diem::khoangcach(Diem a)
 {
   
   return sqrt((this->iHoanh-a.iHoanh)*(this->iHoanh-a.iHoanh)+(this->iTung-a.iTung)*(this->iTung-a.iTung));
   
 }
 
 
 tamgiac::tamgiac(Diem f, Diem g, Diem h)
 {
   a=f;
   b=g;
   c=h;
 }
 void tamgiac::nhaptamgiac()
 {
   cout<<"nhap diem a(x;y): \n";
   a.GetHoanhdo();
   a.GetTungdo();
   cout<<"nhap diem b(x;y): \n";
   b.GetHoanhdo();
   b.GetTungdo();
   cout<<"nhap diem c(x;y): \n";
   c.GetHoanhdo();
   c.GetTungdo();
 }
 void tamgiac::xuattamgiac()
 {
   cout<<"toa do 3 dinh lan luot la: \n";
   a.Xuat();
   b.Xuat();
   c.Xuat();

 }
void tamgiac::tinhtientamgiac(float x, float y)
{
   a.SetHoanhdo(x);
   b.SetHoanhdo(x);
   c.SetHoanhdo(x);
   a.SetTungdo(y);
   b.SetTungdo(y);
   c.SetTungdo(y);
   cout <<" tam giac sau khi tinh tien la: ";
   xuattamgiac();
}
float tamgiac::chuvi()
{
   float canhab, canhac,canhbc, chuvi;
   canhab= this->a.khoangcach(this->b);
   canhac= this->a.khoangcach(this->c);
   canhbc= this->b.khoangcach(this->c);
chuvi= canhab+ canhac+ canhbc;
return chuvi;
}
float tamgiac::dientich()
{
   float canhab, canhac,canhbc, nuachuvi, dientich;
   canhab= this->a.khoangcach(this->b);
   canhac= this->a.khoangcach(this->c);
   canhbc= this->b.khoangcach(this->c);
   nuachuvi= (canhab+ canhac+ canhbc)/2;
   dientich= sqrt(nuachuvi*(nuachuvi-canhab)*(nuachuvi-canhac)*(nuachuvi-canhbc));
   return dientich;
}


