#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include"Thanhvien.h"
using namespace std;

class Giamdoc : public Thanhvien
{
    public:
     Giamdoc() : Thanhvien(0, 1, "GD1") {}
    double tinhHoaHong() const override {
        return 0.0; // Giám đốc không nhận hoa hồng
        }


};