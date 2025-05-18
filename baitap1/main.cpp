#include "diemvatamgiac.h"
#include "diemvatamgiac.cpp"
#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,N; 
    Diem A[100];
    cout<<"nhap n: ";
    cin>>n;
    vector <float> arr;
    for(int i=0;i<n;i++)
    {
    cout <<" Nhap diem A["<<i<<"]\n";
    A[i].GetHoanhdo();
    A[i].GetTungdo();
    cout<<" diem da nhap la: ";
    A[i].Xuat();
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1; j<n;j++)
        {
                arr.push_back(A[i].khoangcach(A[j]));
        }
    }
    cout<<"khoang cach lon nhat = " <<*max_element(arr.begin(),arr.end())<<endl;
     cout<<"khoang cach nho nhat = " <<*min_element(arr.begin(),arr.end())<<endl;

     float a,b;
    cout<<" nhap vecto (a,b): \n";
    cout<<" Nhap a: ";
    cin>>a;
    cout<<" Nhap b: ";
    cin>>b;
    for(int i=0;i<n;i++)
    {
        A[i].Tinhtien(a,b);
    }

    cout<<"nhap N: ";
    cin>>N;
    tamgiac ds[200];
    for(int i=0;i<N;i++)
    {
       cout <<" Nhap tamgiac ds["<<i<<"]\n"; 
       ds[i].nhaptamgiac();
       cout<<"tamgiac da nhap la:";
       ds[i].xuattamgiac();
    }
    vector <float>maxchuvi;
    for(int i=0;i<N;i++)
    {
        maxchuvi.push_back(ds[i].chuvi());
    }
    cout<<"chuvi lon nhat = " <<*max_element(maxchuvi.begin(),maxchuvi.end())<<endl;
    vector <float>maxdientich;
    for(int i=0;i<N;i++)
    {
        maxdientich.push_back(ds[i].dientich());
    }
    cout<<"dientich lon nhat = " <<*max_element(maxdientich.begin(),maxdientich.end())<<endl;
     float x,y;
    cout<<" nhap vecto (x,y): \n";
    cout<<" Nhap x: ";
    cin>>x;
    cout<<" Nhap y: ";
    cin>>y;
    for(int i=0;i<N;i++)
    {
        ds[i].tinhtientamgiac(x,y);
    }

    system("pause");
    return 0;
}