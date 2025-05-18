#include <iostream>

using namespace std;
int GCD(int a, int b)
{
    int x=0;
    while( b!=0)
    {
        x=a%b;
        a=b;
        b=x;
    }
    return a;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b);
    return 0;
}
