#include "ThoiGian.h"
#include <iostream>
using namespace std;

ThoiGian::ThoiGian()
{
	this->iGiay = 0;
	this->iPhut = 0;
	this->iGio = 0;
}

ThoiGian::ThoiGian(int Gio, int Phut, int Giay) : iGio(Gio), iPhut(Phut), iGiay(Giay)
{
}

int ThoiGian::TinhGiay()
{
	return (iGio * 3600 + iPhut * 60 + iGiay);
}

void ThoiGian::TinhLaiGio(int Giay)
{
	int TongGiay = TinhGiay() + Giay;
	iGio = TongGiay / 3600;
	iPhut = (TongGiay % 3600) / 60;
	iGiay = (TongGiay % 3600) % 60;
}

ThoiGian ThoiGian::operator+(int Giay)
{
	ThoiGian KetQua;
	int TongGiay = TinhGiay() + Giay;
	KetQua.iGio = TongGiay / 3600;
	KetQua.iPhut = (TongGiay % 3600) / 60;
	KetQua.iGiay = (TongGiay % 3600) % 60;
	return KetQua;
}

ThoiGian ThoiGian::operator-(int Giay)
{
	ThoiGian KetQua;
	int TongGiay = TinhGiay() - Giay;
	KetQua.iGio = TongGiay / 3600;
	KetQua.iPhut = (TongGiay % 3600) / 60;
	KetQua.iGiay = (TongGiay % 3600) % 60;
	return KetQua;
}

ThoiGian ThoiGian::operator+(ThoiGian a)
{
	ThoiGian KetQua;
	int TongGiay = TinhGiay() + a.TinhGiay();
	KetQua.iGio = TongGiay / 3600;
	KetQua.iPhut = (TongGiay % 3600) / 60;
	KetQua.iGiay = (TongGiay % 3600) % 60;
	return KetQua;
}

ThoiGian ThoiGian::operator-(ThoiGian a)
{
	ThoiGian KetQua;
	int TongGiay = TinhGiay() - a.TinhGiay();
	KetQua.iGio = TongGiay / 3600;
	KetQua.iPhut = (TongGiay % 3600) / 60;
	KetQua.iGiay = (TongGiay % 3600) % 60;
	return KetQua;
}

//prefix ++ --
ThoiGian& ThoiGian::operator++()
{
	this->iGiay++;
	if (iGiay >= 60)
	{
		iPhut++;
		iGiay -= 60;
		if (iPhut >= 60)
		{
			iGio++;
			iPhut -= 60;
			if (iGio >= 24) {
				iGio = 0;
			}
		}
	}
	return *this;
}

ThoiGian& ThoiGian::operator--()
{
	this->iGiay--;
	if (iGiay < 0)
	{
		iPhut--;
		iGiay = 59;
		if (iPhut < 0)
		{
			iGio--;
			iPhut = 59;
			if (iGio < 0) {
				iGio = 23;
			}
		}
	}
	return *this;
}

//postfix ++ --
ThoiGian ThoiGian::operator++(int)
{
	ThoiGian temp = *this;
	this->iGiay++;
	if (iGiay >= 60)
	{
		iPhut++;
		iGiay -= 60;
		if (iPhut >= 60)
		{
			iGio++;
			iPhut -= 60;
			if (iGio >= 24) {
				iGio = 0;
			}
		}
	}
	return temp;
}

ThoiGian ThoiGian::operator--(int)
{
	ThoiGian temp = *this;
	this->iGiay--;
	if (iGiay < 0)
	{
		iPhut--;
		iGiay = 59;
		if (iPhut < 0)
		{
			iGio--;
			iPhut = 59;
			if (iGio < 0) {
				iGio = 23;
			}
		}
	}
	return temp;
}

bool ThoiGian::operator==(ThoiGian a)
{
	return (TinhGiay() == a.TinhGiay());
}

bool ThoiGian::operator!=(ThoiGian a) 
{
	return (TinhGiay() != a.TinhGiay());
}

bool ThoiGian::operator>=(ThoiGian a)
{
	return (TinhGiay() >= a.TinhGiay());
}

bool ThoiGian::operator<=(ThoiGian a)
{
	return (TinhGiay() <= a.TinhGiay());
}

bool ThoiGian::operator>(ThoiGian a)
{
	return (TinhGiay() > a.TinhGiay());
}

bool ThoiGian::operator<(ThoiGian a)
{
	return (TinhGiay() < a.TinhGiay());
}

ThoiGian::~ThoiGian()
{
}
