#include<iostream>
#include"intarr.h"

using namespace std;

IntArr::IntArr(int spt, int gt)
{
    this->count =spt;
    int arr[1000];
    for(int i=0;i<spt;i++)
    {
        arr[i]=gt;
    }
    this->values= arr ;
}
IntArr:: IntArr(int spt)
{
    int arr[1000];
    for(int i=0;i<spt;i++)
    {
        arr[i]=0;
    }
    this->values = arr;
}

void IntArr:: push(int giatri)
{
    this->count+=1;
    *(values+count)=giatri;
}

IntArr IntArr::concat(IntArr mang )
{
    this->count+= mang.count;
    for (int i=0; i<mang.count;i++)
    {
        *(values+count+1+i)= *(mang.values +i);

    }
    return *this;
}
istream & operator>>(istream &x, IntArr & y)
{
    x  >>y.count;
    for(int i=0 ; i<y.count;i++)
    {
        x >> *(y.values+i);
    } 
    return x;
}

ostream & operator<<(ostream &x, IntArr & y)
{
 for(int i=0 ; i<y.count;i++)
    {
        x << *(y.values+i)<<" ";
    }
    return x;
}