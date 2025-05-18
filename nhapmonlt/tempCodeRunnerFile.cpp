#include<iostream>
#include<cmath>
using namespace std;

int sochinhphuong(int a)
{
    int x= sqrt(a);
    if (x*x==a)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a;
    cin>>a;
    if (sochinhphuong(a)==1)
    {
        cout<< " la so chinh phuong";
    }
    else cout <<"ko phai la so chinh phuong";
    return 0;
}
