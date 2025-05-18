#pragma once
#include<iostream>
#include<string>

using namespace std;


class NhanVien {
protected:
  int maSoNV;
  string ten;
  double luongCoBan;

public:
  NhanVien(){}
  NhanVien(int msnv, string t, double lcb) {
    maSoNV = msnv;
    ten = t;
    luongCoBan = lcb;
  }
  void Xuat() {
    cout << "\nMa so nhan vien: " << maSoNV << endl;
    cout << "Ten: " << ten << endl;
    cout << "Luong co ban: " <<(int) luongCoBan << endl;
  }
};


class QuanLy : public NhanVien {
private:
  double tyLeThuong;

public:

  QuanLy(int msnv, string t, double lcb, double tyle) : NhanVien(msnv, t, lcb) {
    tyLeThuong = tyle;
  }


  double TienThuong()  {
    return luongCoBan * tyLeThuong;
  }
};

class KySu : public NhanVien {
private:
  int soGioLamThem;

public:

  KySu(int msnv, string t, double lcb, int gioLamThem) : NhanVien(msnv, t, lcb) {
    soGioLamThem = gioLamThem;
  }


  double TienThuong()
  {
    return soGioLamThem * 100000;
  }
};




