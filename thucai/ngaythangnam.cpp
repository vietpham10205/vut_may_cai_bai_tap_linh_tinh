#include "ngaythangnam.h"
#include <iostream>
using namespace std;

void ngaythangnam::nhap()
{
    cout<<" nhap ";
    cin>>ngay>>thang>>nam;

}

void ngaythangnam::xuat()
{
    cout <<" ngay thang nam la: ";
    cout<< ngay <<"/"<<thang<<"/"<<nam;
}
