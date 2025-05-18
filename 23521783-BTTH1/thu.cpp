#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

struct ps 
{
    int tu,mau;
};
struct mangps
{
    ps a[100];
    int n;
};

void nhap( mangps &phanso)
{
    cin>> phanso.n;
    for (int i=0; i<phanso.n; i++)
    {
        cin>>phanso.a[i].tu;
        cin>>phanso.a[i].mau;
    }
}

int GCD ( int a, int b) {
    int x;
    while (b!=0){
        x=a%b;
        a=b;
        b=x;
    }
    return a;
    
    }
    
float ketqua (mangps &phanso)
{
      for( int i=0; i<phanso.n; i++)
      {
          if ( phanso.a[i].mau!=0&&phanso.a[i].tu % phanso.a[i].mau==0)
          {
              cout <<phanso.a[i].tu/phanso.a[i].mau<<endl; continue;
          }
          if (phanso.a[i].mau==0)
          {
              cout<<"Khong thoa yeu cau bai toan"<<endl;
          }
          if (phanso.a[i].mau!=0&&phanso.a[i].tu % phanso.a[i].mau!=0)
          {
              if((float)phanso.a[i].tu/phanso.a[i].mau>0)
              {
                  cout<< phanso.a[i].tu/GCD(phanso.a[i].tu,phanso.a[i].mau)<<"/"<<phanso.a[i].mau/GCD(phanso.a[i].tu,phanso.a[i].mau)<<endl;
              }
              if((float)phanso.a[i].tu/phanso.a[i].mau<0)
              {
                  cout<< -abs(phanso.a[i].tu/GCD(phanso.a[i].tu,phanso.a[i].mau))<<"/"<<abs(phanso.a[i].mau/GCD(phanso.a[i].tu,phanso.a[i].mau))<<endl;
              }
          }
      }
    return 0;  
}


int main()
{
    mangps phanso;
    nhap( phanso);
    ketqua(phanso);
    return 0;
}