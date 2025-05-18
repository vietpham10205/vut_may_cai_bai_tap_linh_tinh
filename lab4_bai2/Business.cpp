#include "Business.h"

Business::Business(int x) : KhachSan(x) 
{
    std::cout << "DOANH THU: " << Business::tinhDoanhThu() << " VND" << std::endl;
}

int Business::tinhDoanhThu()
{
    return iSoDem * 300000;
}