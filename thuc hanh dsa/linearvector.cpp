#include <vector>
#include <iostream>
using namespace std;

 int linear(vector<int> a, int x)
 {
    int n= a.size();
    for(int i=0; i<n; i++)
    {
        if( a[i]== x) return i;

    }
    return -1;
 }
int main()
{
    vector<int> a;

    int n,x;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        a.push_back(t);
    }
    cin>>x;
    int t=linear(a,x);
    if(t!=-1)
    cout<<"\n"<<"vi tri: "<<t+1;
    else cout<< "ko tim thay";

    return 0;
}
