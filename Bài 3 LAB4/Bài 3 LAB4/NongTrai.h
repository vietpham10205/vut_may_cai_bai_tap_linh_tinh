#pragma once
#include "GiaSuc.h"
#include "Bo.h"
#include "Cuu.h"
#include "De.h"

class NongTrai
{
private:
    Bo* bo;
    Cuu* cuu;
    De* de;
    int TongSua;
public:
    NongTrai(int slBo = 0, int slCuu = 0, int slDe = 0);
    ~NongTrai();

    void ThongKe() const;
    void KeuTatCa() const;
    void SinhConChoTatCa();
    void ChoSuaChoTatCa();
    int TongSuaDaCho() const;
};

