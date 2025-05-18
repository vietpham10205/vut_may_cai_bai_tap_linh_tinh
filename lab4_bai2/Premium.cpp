#include "Premium.h"
Premium::Premium(int x, int y) : KhachSan(x)
{
	iPhiDichVu = y;
	std::cout << "PHI DICH VU: " << iPhiDichVu << "\nDOANH THU: " << Premium::tinhDoanhThu() << " VND" << std::endl;
}
int Premium::tinhDoanhThu()
{
	return iSoDem * 500000 + iPhiDichVu;
}