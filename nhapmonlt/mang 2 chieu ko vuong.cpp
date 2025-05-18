#include<iostream>
#include<cmath>
using namespace std;

void nhapmang( int a[][100], int&n, int &m)
{
    for (int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>> a[i][j];
        }
    }
}
void xuatmang( int a[][100], int&n, int &m )
{
    for (int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<< a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n,m;
    cout<< "nhap so hang : ";
    cin>>n;
    cout<<" nhap so cot: ";
    cin>>m;
    int a[100][100];
    nhapmang(a,n,m);
    xuatmang(a,n,m);
    return 0;

}
