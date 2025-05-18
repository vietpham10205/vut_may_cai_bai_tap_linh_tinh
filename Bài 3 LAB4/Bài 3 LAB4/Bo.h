#pragma once
#include "GiaSuc.h"
class Bo : public GiaSuc
{
private:
    int SoLuongSua = 0;
public:
    Bo(int sl = 0) : GiaSuc(sl) {}

    void SinhCon() override;
    void ChoSua() override;
    void Keu() const override;
    int GetSoLuongSuaBo() const 
    {
        return SoLuongSua;
    }
};

