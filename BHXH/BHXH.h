#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct thoigian
{
    int ngay, thang, nam;   
} ;


class bhxh
{
    protected:
        string maso;
        int thunhap;
        bool hinhthuc; // 1: tu nguyen, 0: bac buoc
        thoigian ngaybatdau;
        thoigian ngayketthuc;
    public: 
    int tinhluongdongbhxh();
    virtual int tinhbhxh1lan()=0;
};


class tunguyen : public bhxh
{
    protected:
        bool doituong; // 1: ho ngheo, 0: doi tuong khac
    public:
        int tinhbhxh1lan() override;
        int tienhotro()
        {

        };

};

class bacbuoc : public bhxh
{
    public:
    bacbuoc(string ms, int th,bool hc, thoigian start, thoigian end)
    {
        maso=ms;
        thunhap=th;
        hinhthuc=hc;
        ngaybatdau = start;
        ngayketthuc = end;
    };
    bacbuoc(){};
    int tinhbhxh1lan() override; 
};
