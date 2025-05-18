#include "Diem.h"
#include "DaGiac.h"
#include "DaGiac.cpp"
#include <iostream>
using namespace std;
int main()
{
	DaGiac a;
	a.Nhap();
	a.Xuat();
	cout << "Da giac sau khi tinh tien:" << endl;
	a.TinhTien(2, 3);
	a.Xuat();
	cout << "Da giac sau khi phong to:" << endl;
	a.PhongTo(5);
	a.Xuat();
	cout << "Da giac sau khi thu nho:" << endl;
	a.ThuNho(5);
	a.Xuat();
	cout << "Da giac sau khi quay:" << endl;
	a.Quay(180);
	a.Xuat();
	system("pause");
	return 0;
}