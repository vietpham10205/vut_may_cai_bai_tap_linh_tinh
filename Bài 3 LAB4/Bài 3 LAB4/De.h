#pragma once
#include "GiaSuc.h"

class De : public GiaSuc
{
private:
    int SoLuongSua = 0;
public:
    De(int sl = 0) : GiaSuc(sl) {}

    void SinhCon() override;
    void ChoSua() override;
    void Keu() const override;
    int GetSoLuongSuaDe() const 
    {
        return SoLuongSua;
    }
};
