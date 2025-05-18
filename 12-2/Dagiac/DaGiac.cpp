#include "DaGiac.h"
#include "Diem.h"
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void DaGiac::Nhap()
{
	cout << "Nhap so luong diem:" << endl;
	cin >> n;
	Dinh = new Diem[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap Tung Do dinh thu " << i + 1 << endl;
		cin >> Dinh[i].x;
		cout << "Nhap Hoanh Do dinh thu " << i + 1 << endl;
		cin >> Dinh[i].y;
	}
}

void DaGiac::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		cout << "Dinh " << i + 1 << " = (" << Dinh[i].x << ", " << Dinh[i].y << ")" << endl;
	}
}

void DaGiac::TinhTien(float x, float y)
{
	for (int i = 0; i < n; i++)
	{
		Dinh[i].x += x;
		Dinh[i].y += y;
	}
}

void DaGiac::PhongTo(float a)
{
	for (int i = 0; i < n; i++)
	{
		Dinh[i].x *= a;
		Dinh[i].y *= a;
	}
}
void DaGiac::ThuNho(float b)
{
	for (int i = 0; i < n; i++)
	{
		Dinh[i].x /= b;
		Dinh[i].y /= b;
	}
}
void DaGiac::Quay(float c)
{
	double goccos = cos(c);
	double gocsin = sin(c);
	for (int i = 0; i < n; ++i) 
	{
		double Tungmoi = Dinh[i].x * goccos - Dinh[i].y * gocsin;
		double Hoanhmoi = Dinh[i].x * gocsin + Dinh[i].y * goccos;
		Dinh[i].x = Tungmoi;
		Dinh[i].y = Hoanhmoi;
	}
}

DaGiac::~DaGiac()
{
	delete[] Dinh;
}