#pragma once
#include "KhachSan.h"
class Business :
    public KhachSan
{
public:
    Business(int);
    int tinhDoanhThu() override;
};
