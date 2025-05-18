#include "ThiSinh.h"
#include <iostream>
#include <string>
using namespace std;

ThiSinh::ThiSinh()
{
}

ThiSinh::~ThiSinh()
{
}

void ThiSinh::Nhap()
{
	cin.ignore();
	cout << "Nhap ten: ";
	getline(cin, Ten);
	cout << "Nhap ma so sinh vien: ";
	getline(cin, MSSV);
	cout << "Nhap ngay sinh: ";
	cin >> iNgay;
	cout << "Nhap thang sinh: ";
	cin >> iThang;
	cout << "Nhap nam sinh: ";
	cin >> iNam;
	cout << "Nhap diem Toan: ";
	cin >> fToan;
	cout << "Nhap diem Van: ";
	cin >> fVan;
	cout << "Nhap diem Anh: ";
	cin >> fAnh;
}

void ThiSinh::Xuat()
{
	cout << "Ten: " << Ten << endl;
	cout << "MSSV: " << MSSV << endl;
	cout << "Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam << endl;
	cout << "Diem toan: " << fToan << endl;
	cout << "Diem van: " << fVan << endl;
	cout << "Diem anh: " << fAnh << endl;
}

float ThiSinh::Tong()
{
	return (fToan + fVan + fAnh);
}
