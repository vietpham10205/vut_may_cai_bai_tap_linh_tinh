#include"sophuc.h"
#include"sophuc.cpp"
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main()
{
    sophuc a,b,c;
    cout<<"Nhap so phuc 1: \n";
    cin>> a;
    cout<<a<<endl;
    cout<<"Nhap so phuc 2: \n";
    cin>> b;
    cout <<b<<endl;
    
    c=a+b;
    cout<< "Tong 2 so phuc: "<<c<<endl;

    c=a-b;
    cout<< "Hieu 2 so phuc: "<<c<<endl;

    c=a*b;
    cout<< "Tich 2 so phuc: "<<c<<endl;

    c=a/b;
    cout<< "Thuong 2 so phuc: "<<c<<endl;

    cout<<" kiem tra a==b?: ";
     if(a==b) 
		cout<<"a=b: dung"<<endl;
	else 
		cout<<"a=b : sai"<<endl;

    cout<<" kiem tra a!=b?: ";
        if(a!=b) 
		cout<<"a!=b: dung"<<endl;
	else 
		cout<<"a!=b : sai"<<endl;

    return 0;

}