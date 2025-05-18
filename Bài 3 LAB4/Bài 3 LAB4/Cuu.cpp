#include "Cuu.h"
#include <cstdlib> 
using namespace std;
void Cuu::SinhCon() 
{
    int con = rand() % 5 + 1; 
    SoLuong += con;
}

void Cuu::ChoSua()
{
    SoLuongSua += rand() % 6; 
}

void Cuu::Keu() const
{
    cout << "Cuu: Cuu...Cuu..." << endl;
}
