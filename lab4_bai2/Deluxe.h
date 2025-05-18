#pragma once
#include "KhachSan.h"
class Deluxe :
    public KhachSan
{
private:
    int iPhiDichVu;
    int iPhiPhucVu;
public:
    Deluxe(int, int, int);
    int tinhDoanhThu() override;
};

