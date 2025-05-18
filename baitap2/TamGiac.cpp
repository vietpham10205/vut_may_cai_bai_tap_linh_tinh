#include "TamGiac.h"
#include <iostream>
#include <cmath>
using namespace std;


TamGiac::TamGiac()
{
}


TamGiac::~TamGiac()
{
}

void TamGiac::Nhap() {
	std::cout << "Moi nhap toa do cua dinh A:\n";
	std::cout << "x = ";
	std::cin >> DinhA[0];
	std::cout << "y = ";
	std::cin >> DinhA[1];

	std::cout << "Moi nhap toa do cua dinh B:\n";
	std::cout << "x = ";
	std::cin >> DinhB[0];
	std::cout << "y = ";
	std::cin >> DinhB[1];

	std::cout << "Moi nhap toa do cua dinh C:\n";
	std::cout << "x = ";
	std::cin >> DinhC[0];
	std::cout << "y = ";
	std::cin >> DinhC[1];
}

void TamGiac::Xuat() {
	std::cout << "Toa do dinh A: A(" << DinhA[0] << "," << DinhA[1] << ")\n";
	std::cout << "Toa do dinh B: B(" << DinhB[0] << "," << DinhB[1] << ")\n";
	std::cout << "Toa do dinh C: C(" << DinhC[0] << "," << DinhC[1] << ")\n";
}

void TamGiac::TinhTien(float ttx, float tty) {
	DinhA[0] += ttx;
	DinhA[1] += tty;

	DinhB[0] += ttx;
	DinhB[1] += tty;

	DinhC[0] += ttx;
	DinhC[1] += tty;
}

void TamGiac::PhongTo(float fPhongTo) {
	DinhA[0] *= fPhongTo;
	DinhA[1] *= fPhongTo;

	DinhB[0] *= fPhongTo;
	DinhB[1] *= fPhongTo;

	DinhC[0] *= fPhongTo;
	DinhC[1] *= fPhongTo;
}

void TamGiac::ThuNho(float fThuNho) {
	DinhA[0] /= fThuNho;
	DinhA[1] /= fThuNho;

	DinhB[0] /= fThuNho;
	DinhB[1] /= fThuNho;

	DinhC[0] /= fThuNho;
	DinhC[1] /= fThuNho;
}

void TamGiac::Quay(float goc) {
	float radian = goc * 3.14 / 180.0;
	float cosVal = cos(radian);
	float sinVal = sin(radian);

	float xA = DinhA[0];
	float yA = DinhA[1];
	DinhA[0] = xA * cosVal - yA * sinVal;
	DinhA[1] = xA * sinVal + yA * cosVal;

	float xB = DinhB[0];
	float yB = DinhB[1];
	DinhB[0] = xB * cosVal - yB * sinVal;
	DinhB[1] = xB * sinVal + yB * cosVal;

	float xC = DinhC[0];
	float yC = DinhC[1];
	DinhC[0] = xC * cosVal - yC * sinVal;
	DinhC[1] = xC * sinVal + yC * cosVal;
}