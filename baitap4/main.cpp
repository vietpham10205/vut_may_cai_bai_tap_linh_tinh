#include "thisinh.h"
#include "thisinh.cpp"
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int largest(int arr[], int n)
{
   return *max_element(arr,arr + n);
}
int main() 
{
	int n;
	cout << "Nhap so luong thi sinh: "; 
	cin >> n;
    thisinh* dsThiSinh = new thisinh[n];
    cout << endl;

    for (int i = 0; i < n; i++)
{  
	cout << "Nhap thong tin cho thi sinh thu " << i+1 << ":\n";
	dsThiSinh[i].Nhap();
}
    cout << "\nDanh sach cac thi sinh co tong diem 3 mon lon hon 15 diem:\n";
    for (int i = 0; i < n; i++)
{
	if(dsThiSinh[i].Tong() > 15)
	{dsThiSinh[i].Xuat();
	cout<<" tong diem : "<< dsThiSinh[i].Tong();}
}
int arr[100];
int t;
for (int i = 0; i < n; i++)
{
	arr[i]= dsThiSinh[i].Tong();

}

cout <<"Thi sinh co diem cao nhat: " ;
t=largest(arr, n);
for (int i = 0; i < n; i++)
{
	if(dsThiSinh[i].Tong() == t)
	{dsThiSinh[i].Xuat();
	cout<<" tong diem : "<< dsThiSinh[i].Tong()<<"\n";}
}
delete[] dsThiSinh;

 system("pause");
    return 0;
}