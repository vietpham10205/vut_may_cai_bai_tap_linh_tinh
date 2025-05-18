#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include"Thanhvien.h"
using namespace std;

class Daily : public Thanhvien {
public:
    Daily(int id, const string& ten, int cap) : Thanhvien(id, 2, ten), cap(cap) {}

    double tinhHoaHong() const override 
    {
        return 5.0 + cap * 3.0;
    }

private:
    int cap;
};