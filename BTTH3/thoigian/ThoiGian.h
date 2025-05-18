#pragma once
#include <iostream>
using namespace std;

class ThoiGian
{
	int iGio;
	int iPhut;
	int iGiay;
public:
	ThoiGian();
	ThoiGian(int Gio, int Phut, int Giay);
	int TinhGiay();
	void TinhLaiGio(int Giay);
	ThoiGian operator+(int Giay);
	ThoiGian operator-(int Giay);
	ThoiGian operator+(ThoiGian a);
	ThoiGian operator-(ThoiGian a);
	ThoiGian& operator++();
	ThoiGian& operator--();
	ThoiGian operator++(int);
	ThoiGian operator--(int);
	bool operator==(ThoiGian);
	bool operator!=(ThoiGian);
	bool operator>=(ThoiGian);
	bool operator<=(ThoiGian);
	bool operator>(ThoiGian);
	bool operator<(ThoiGian);
	friend istream& operator >> (istream& is, ThoiGian& time)
	{
		cout << "Nhap gio: ";
		is >> time.iGio;
		cout << "Nhap phut: ";
		is >> time.iPhut;
		cout << "Nhap giay: ";
		is >> time.iGiay;
		return is;

	}
	friend ostream& operator<< (ostream& os, const ThoiGian& time)
	{
		os << time.iGio << " gio " << time.iPhut << " phut " << time.iGiay << " giay" << endl;
		return os;
	}
	~ThoiGian();
};


