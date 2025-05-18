#include "De.h"
#include <cstdlib> 
using namespace std;
void De::SinhCon()
{
    int con = rand() % 8 + 1;
    SoLuong += con;
}

void De::ChoSua() 
{
    SoLuongSua += rand() % 11; 
}

void De::Keu() const
{
    cout << "De:Yee...Yee..." << endl;
}
