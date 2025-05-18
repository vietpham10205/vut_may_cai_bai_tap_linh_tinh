#pragma once
#include <iostream>

class GiaSuc
{
protected:
    int SoLuong;

public:
    GiaSuc(int sl = 0) : SoLuong(sl) {}

    virtual void SinhCon() = 0; 
    virtual void ChoSua() = 0; 
    virtual void Keu() const = 0; 

    int GetSoLuong() const 
    {
        return SoLuong;
    }
};

