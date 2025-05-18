#include "NongTrai.h"
#include "NongTrai.cpp"
#include"GiaSuc.h"
#include"GiaSuc.cpp"
#include"De.h"
#include"De.cpp"
#include"Cuu.h"
#include"Cuu.cpp"
#include"Bo.h"
#include"Bo.cpp"
using namespace std;
int main()
{
    NongTrai nongTrai(2010, 502, 73);
    cout << "Thong ke truoc khi thuc hien cac hoat dong:" << endl;
    nongTrai.ThongKe();
    cout << endl;
    cout << "Tieng keu khi tat ca gia suc doi:" << endl;
    nongTrai.KeuTatCa();
    cout << endl;
    nongTrai.SinhConChoTatCa();
    nongTrai.ChoSuaChoTatCa();
    cout << "Thong ke gia suc sau khi sinh them:" << endl;
    nongTrai.ThongKe();
    cout << "Tong so luong sua da cho: " << nongTrai.TongSuaDaCho() << " lit" << endl;
    return 0;
}
