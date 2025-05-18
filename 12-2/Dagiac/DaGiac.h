#pragma once
#include <vector>
#include "Diem.h"
#include <iostream>
using namespace std;
class DaGiac
{
private:
	int n;
	Diem *Dinh;
public:
	~DaGiac();
	void Nhap();
	void Xuat();
	void TinhTien(float x, float y);
	void PhongTo(float a);
	void ThuNho(float b);
	void Quay(float c);
};

