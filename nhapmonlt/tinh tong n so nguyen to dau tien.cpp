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
int tongsnt( int n)
{
    int s=0;
    int i=2;
    int dem=0;
    while (dem<n)1
   {
       if(snt(i)==1)
       {
           s=s+i;
           dem++;
       }
       i++;
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
