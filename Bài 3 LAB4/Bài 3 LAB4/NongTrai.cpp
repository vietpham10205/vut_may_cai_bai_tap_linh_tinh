#include "NongTrai.h"
#include <iostream>
using namespace std;
NongTrai::NongTrai(int slBo, int slCuu, int slDe) 
{
    bo = new Bo(slBo);
    cuu = new Cuu(slCuu);
    de = new De(slDe);
    TongSua = 0;
}

NongTrai::~NongTrai()
{
    delete bo;
    delete cuu;
    delete de;
}

void NongTrai::ThongKe() const
{
    cout << "Thong ke so luong gia suc:" << endl;
    cout << "So luong bo: " << bo->GetSoLuong() << endl;
    cout << "So luong cuu: " << cuu->GetSoLuong() << endl;
    cout << "So luong de: " << de->GetSoLuong() << endl;
}

void NongTrai::KeuTatCa() const 
{
    cout << "Tieng keu tat ca cac gia suc:" << endl;
    bo->Keu();
    cuu->Keu();
    de->Keu();
}

void NongTrai::SinhConChoTatCa()
{
    bo->SinhCon();
    cuu->SinhCon();
    de->SinhCon();
}

void NongTrai::ChoSuaChoTatCa() 
{
    bo->ChoSua();
    cuu->ChoSua();
    de->ChoSua();
    cout << "So luong sua cua lan luot moi con bo, cuu, de:" << endl;
    cout << bo->GetSoLuongSuaBo() << ", " << cuu->GetSoLuongSuaCuu() << ", " << de->GetSoLuongSuaDe() << endl;
    TongSua = bo->GetSoLuong() * bo->GetSoLuongSuaBo() + cuu->GetSoLuong() * cuu->GetSoLuongSuaCuu() + de->GetSoLuong() * de->GetSoLuongSuaDe();
}
int NongTrai::TongSuaDaCho() const 
{
    return TongSua;
}