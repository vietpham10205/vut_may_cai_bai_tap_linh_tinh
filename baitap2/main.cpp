#include "TamGiac.h"
#include "TamGiac.cpp"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	TamGiac* tamgiac = new TamGiac;
	tamgiac->Nhap();
	cout << "Toa do tam giac vua nhap:\n";
	tamgiac->Xuat();
	cout << "\nTinh tien x va y cua tam giac 2 don vi:\n";
	tamgiac->TinhTien(2, 2);
	tamgiac->Xuat();
	cout << "\nPhong to tam giac len 3 lan\n";
	tamgiac->PhongTo(3);
	tamgiac->Xuat();
	cout << "\nThu nho tam giac di 3 lan\n";
	tamgiac->ThuNho(3);
	tamgiac->Xuat();
	cout << "\nQuay tam giac 1 goc 45 do:\n";
	tamgiac->Quay(45);
	tamgiac->Xuat();
	delete tamgiac;
	system("pause");
	return 0;
}