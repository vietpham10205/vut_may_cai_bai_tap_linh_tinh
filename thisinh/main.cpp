#include "ThiSinh.h"
#include <iostream>
using namespace std;



int main() 
{
	int n;
	cout << "Nhap so luong thi sinh: "; 
	cin >> n;
	

	ThiSinh* dsThiSinh = new ThiSinh[n];
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
		dsThiSinh[i].Xuat();
	}
	delete[] dsThiSinh;
	system("pause");
	return 0;
}