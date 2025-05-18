#pragma once
#include "GiaSuc.h"

class Cuu : public GiaSuc
{
private:
    int SoLuongSua = 0;
public:
    Cuu(int sl = 0) : GiaSuc(sl) {}

    void SinhCon() override;
    void ChoSua() override;
    void Keu() const override;
    int GetSoLuongSuaCuu() const
    {
        return SoLuongSua;
    }
};


