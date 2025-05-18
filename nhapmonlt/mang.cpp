#include<iostream>
#include<cmath>
using namespace std;

void nhapmang( int a[][100], int&n)
{
    for (int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>> a[i][j];
        }
    }
}
void xuatmang( int a[][100], int&n)
{
    for (int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int a[100][100];
    nhapmang(a,n);
    xuatmang(a,n);

}
