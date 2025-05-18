#include<iostream>
#include<cmath>
using namespace std;

void nhapmang(int a[100],int n)
{

    for (int i=0; i<n; i++)
    {
        cin>> a[i];
    }
}

int tong(int a[100], int n)
{
    int s=0;
    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            s=s+a[i]*a[j];
        }
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    int x;
    int a[100];
    nhapmang(a,n);
    x=(pow(10,9)+7.0);
    cout<<tong(a,n)%x;
    return 0;
}

