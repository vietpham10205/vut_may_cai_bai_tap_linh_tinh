#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include"Thanhvien.h"
using namespace std;


class NDT : public Thanhvien {
public:
    NDT(int id, const string& ten, int idDaiLy, double soCoin) : Thanhvien(id, 3, ten), idDaiLy_(idDaiLy), soCoin_(soCoin) {}

    double tinhHoaHong() const override {
        return 0.0; // Nhà đầu tư không nhận hoa hồng
    }

    double tinhLaiSuat() const {
        if (soCoin_ <= 100) {
            return soCoin_ * 0.1;
        } else if (soCoin_ <= 200) {
            return soCoin_ * 0.12;
        } else {
            return soCoin_ * 0.15;
        }
    }

public:
    int idDaiLy_;
    double soCoin_;
};