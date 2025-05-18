#include<iostream>
#include<cmath>
using namespace std;

int snt(int a)
{
    if (a<2){return 0;}
    for(int i=2; i<=sqrt(a);i++)
    {
        if ( a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int tongsnt( int a)
{
    int s=0;
    for(int i=1; i<=a;i++)
    {
        if (snt(i)==1)
        {
            s=s+i;
        }
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    cout<< tongsnt(n);
    return 0;
}
