#include<iostream>
#include<cmath>
using namespace std;

int kiemtrascp(int a)
{
    int x=sqrt(a);
    if (x*x==a)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int L,R;
    cin>>L>>R;
    int dem=0;
    for(int i=L+1; i<R;i++)
    {
        if( kiemtrascp(i)==1&& i%4==0)
        {
            dem++;
        }
    }
    cout<<dem;
    return 0;
}
