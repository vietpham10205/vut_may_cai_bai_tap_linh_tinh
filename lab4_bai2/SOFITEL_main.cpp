#include "Deluxe.h"
#include "Premium.h"
#include "Business.h"
#include "Business.cpp"
#include "Premium.cpp"
#include "Deluxe.cpp"
#include"KhachSan.h"
#include"KhachSan.cpp"
#include<iostream>
int main()
{
	std::cout << "Thong tin cua phong Deluxe 1:\n";
	Deluxe D1(3, 500000, 300000);
	std::cout << "\n";
	std::cout << "Thong tin cua phong Deluxe 2:\n";
	Deluxe D2(2, 700000, 250000);
	std::cout << "\n";
	std::cout << "Thong tin cua phong Premium 1:\n";
	Premium P1(6, 90000);
	std::cout << "\n";
	std::cout << "Thong tin cua phong Premium 2:\n";
	Premium P2(5, 80000);
	std::cout << "\n";
	std::cout << "Thong tin cua phong Business:\n";
	Business B(3);
	std::cout << "\n";
	int doanhthuD = D1.tinhDoanhThu() + D2.tinhDoanhThu();
	int doanhthuP = P1.tinhDoanhThu() + P2.tinhDoanhThu();
	int doanhthuB = B.tinhDoanhThu();
	std::cout << "CONCLUSION: ";
	if (doanhthuD > doanhthuB && doanhthuD > doanhthuP)
	{
		std::cout << "Doanh thu phong Deluxe nhieu nhat\n";
	}
	else if (doanhthuP > doanhthuD && doanhthuP > doanhthuB)
	{
		std::cout << "Doanh thu phong Premium nhieu nhat\n";
	}
	else 
	{
		std::cout << "Doanh thu phong Business nhieu nhat\n";
	}
	return 0;
}