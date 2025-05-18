#include "time.h"
#include <iostream>
using namespace std;

void giophutgiay::Nhap()
 {
    
    do  {
        cout<< "nhap gio : ";
        cin>> iGio;
        }
    while (iGio<0 || iGio>23);

    
    do  {
        cout<< "nhap phut : ";
        cin>>iPhut;
        }
    while (iPhut<0|| iPhut>59);

    
    do  {
        cout<< "nhap giay : ";
        cin>>iGiay;
        }
    while (iGiay<0|| iGiay>59);


 }


void giophutgiay::Xuat()
{
    cout << " thoi gian da nhap la: ";
    cout << iGio<<":"<<iPhut<<":"<<iGiay<<endl;
}

void giophutgiay::Congthemmotgiay()
{
    cout << " cong them 1 giay: "<<endl;
   if(iGiay<59)
   {
    cout << iGio<<":"<<iPhut<<":"<<iGiay+1<<endl;
   }
   if (iGiay==59)
   {
         iGiay=00;
        if(iPhut<59 )
        {  
            cout<< iGio<<":"<<iPhut+1<<":"<<iGiay<<endl;
        }
        if (iPhut==59)
        {   
            iPhut=00;
           if (iGio<23)
           {
            cout <<iGio + 1<<":"<<iPhut<<":"<<iGiay<<endl;
           }
           if (iGio==23)
           {
            iGio=00;
            cout<< iGio<<":"<<iPhut<<":"<<iGiay<<endl;
           }
           
           
        }
        
   }
}