#include<vector>
#include <iostream>
using namespace std;

int linearsearch(int a[],int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if( a[i]==x) return i;
    }
     return -1;
}

int main()
{
    int a[1000];
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    int t=linearsearch(a,n,x);
    if(t!=-1)
    cout<<"\n"<<"vi tri: "<<t+1;
    else cout<< "ko tim thay";

    return 0;
}
