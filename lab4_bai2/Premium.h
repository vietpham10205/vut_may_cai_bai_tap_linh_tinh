#pragma once
#include "KhachSan.h"
class Premium :
    public KhachSan
{
private:
    int iPhiDichVu;
public:
    Premium(int, int);
    int tinhDoanhThu() override;
};

