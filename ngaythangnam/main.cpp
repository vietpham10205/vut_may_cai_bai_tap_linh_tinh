#include"ngaythangnam.h"
#include"ngaythangnam.cpp"
#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main()
{
    NgayThangNam a, b;
    cout<<" nhap a :\n";
    cin>>a;
    cout<<"ngay da nhap la: "<<a<<endl;
    cout<<"so ngay la:  "<<a.TinhNgay()<<endl;
     
    cout<<"cong them 10 ngay = "<<a+10<<endl;
    cout<<" tru di 20 ngay = "<< a-20<<endl;
    cout<<" nhap b :\n";
    cin >>b;
    cout<<"ngay da nhap la: "<<b<<endl;
    cout<<"a-b la :  "<< a-b<<endl;
    cout<<"a++ la: "<<++a<<endl;
    cout<<"b-- la: "<<--b<<endl;
      if(a==b) 
		cout<<"a=b: dung"<<endl;
	else 
		cout<<"a=b : sai"<<endl;
    
      if(a!=b) 
		cout<<"a!=b: dung"<<endl;
	else 
		cout<<"a!=b : sai"<<endl;
        if(a<=b) 
		cout<<"a<=b: dung"<<endl;
	else 
		cout<<"a<=b : sai"<<endl;
        
        if(a>=b) 
		cout<<"a>=b: dung"<<endl;
	else 
		cout<<"a>=b : sai"<<endl;

        if(a<b) 
		cout<<"a<b: dung"<<endl;
	else 
		cout<<"a<b : sai"<<endl;

        if(a>b) 
		cout<<"a>b: dung"<<endl;
	else 
		cout<<"a>b : sai"<<endl;
    system("pause");
    return 0;
}