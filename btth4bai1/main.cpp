#include"Nhanvien.h"
#include<iostream> 
#include<cstdio>
#include<string>
#include<string.h>
using namespace std;

int main() {
  // Nhập thông tin quản lý
  int msnvQL, gioLamThemQL;
  string tenQL;
  long int luongCoBanQL;
  double  tyLeThuongQL;
  cout << "\nNhap thong tin quan ly: " << endl;
  cout << "Ma so nhan vien: "; cin >> msnvQL;
  cin.ignore();
  cout << "Ten: "; getline(cin, tenQL); 
  cout << "Luong co ban: "; cin >> luongCoBanQL;
  cout << "Ty le thuong: "; cin >> tyLeThuongQL;

  // Nhập thông tin kỹ sư
  int msnvKS, soGioLamThemKS;
  string tenKS;
  long int luongCoBanKS;
  cout << "\nNhap thong tin ky su: " << endl;
  cout << "Ma so nhan vien: "; cin >> msnvKS;
  cin.ignore();
  cout << "Ten: "; getline(cin, tenKS);
  cout << "Luong co ban: "; cin >> luongCoBanKS;
  cout << "So gio lam them: "; cin >> soGioLamThemKS;

  // Tạo đối tượng quản lý và kỹ sư
  QuanLy ql(msnvQL, tenQL, luongCoBanQL, tyLeThuongQL);
  KySu ks(msnvKS, tenKS, luongCoBanKS, soGioLamThemKS);

  // Hiển thị thông tin quản lý
  cout << "\nThong tin quan ly: " << endl;
  ql.Xuat();
  cout << "Tien thuong: " << (int)ql.TienThuong() << endl;

  // Hiển thị thông tin kỹ sư
  cout << "\nThong tin ky su: " << endl;
  ks.Xuat();
  cout << "Tien thuong: " <<(int) ks.TienThuong() << endl;
 system ("pause"); 
  return 0;
}