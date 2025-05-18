#include "Bo.h"
#include <cstdlib> 
using namespace std;
void Bo::SinhCon() 
{
    int con = rand() % 10 + 1; 
    SoLuong += con;
}

void Bo::ChoSua()
{
    SoLuongSua += rand() % 21;
}

void Bo::Keu() const
{
    cout << "Bo: Boo...Boo..." << endl;
}
