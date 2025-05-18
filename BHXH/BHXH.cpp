#include <iostream>
#include <string>
#include <vector>
#include"BHXH.h"
using namespace std;

int bhxh ::tinhluongdongbhxh()
{
    int ketqua;
    ketqua = this->thunhap *((this->ngayketthuc.nam-this->ngaybatdau.nam)*12 + (this->ngayketthuc.thang-this->ngaybatdau.thang ));
    return ketqua;
}

int bacbuoc :: tinhbhxh1lan()
{
    int ketqua;
    int binhquan = this->tinhluongdongbhxh();
    
        
        ketqua=( 1.5 * ((2014 -this->ngaybatdau.nam)+(0-this->ngaybatdau.thang))*binhquan )+(2* ((this->ngayketthuc.nam - 2014 )+(this->ngayketthuc.thang-0))*binhquan);
        return ketqua;
    
}

int tunguyen :: tinhbhxh1lan()
{
     int ketqua;
    int binhquan = this->tinhluongdongbhxh();

    if (this->doituong==1)
    {
        ketqua = 0;
    }
}