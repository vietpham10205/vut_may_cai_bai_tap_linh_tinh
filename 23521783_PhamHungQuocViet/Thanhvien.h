#pragma once
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Thanhvien
{
    protected:
    int id_;
    int loai_;
    string ten_;

    public:
    Thanhvien(int id, int loai, const string& ten) : id_(id), loai_(loai), ten_(ten) {}
    virtual ~Thanhvien() {}
    virtual double tinhHoaHong() const = 0;
    virtual void hienThiThongTin() const {
        std::cout << id_ << " " << tinhHoaHong() << std::endl;
    } 
};