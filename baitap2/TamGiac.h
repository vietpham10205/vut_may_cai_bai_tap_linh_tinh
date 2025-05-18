#pragma once
#include <iostream>
#include <cmath>

class TamGiac
{
	float DinhA[2];
	float DinhB[2];
	float DinhC[2];
public:
	void Nhap();
	void Xuat();
	void TinhTien(float, float);
	void PhongTo(float);
	void ThuNho(float);
	void Quay(float);
	TamGiac();
	~TamGiac();
};

