#include "Deluxe.h"

Deluxe::Deluxe(int x, int y = 10000, int z = 10000) : KhachSan(x), iPhiDichVu(y), iPhiPhucVu(z) 
{
	std::cout << "PHI DICH VU: " << iPhiDichVu << "\nPHI PHUC VU: " << iPhiPhucVu << "\nDOANH THU: " << Deluxe::tinhDoanhThu() << " VND" << std::endl;
}

int Deluxe::tinhDoanhThu() 
{
	return iSoDem * 750000 + iPhiDichVu + iPhiPhucVu;
}