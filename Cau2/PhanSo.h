#ifndef PHAN_SO
#define PHAN_SO
 
class PhanSo
{
    private:
        int iTu;
        int iMau;
         
    private:
        int UCLN(int a, int b);
 
    public:
        PhanSo();
        PhanSo(int iTu, int iMau);
        void Nhap();
        void Xuat();
        void RutGon();
        PhanSo Tong(const PhanSo &);
        PhanSo Hieu (const PhanSo &);
        PhanSo Tich (const PhanSo &);
        PhanSo Thuong (const PhanSo &);
        int SoSanh (const PhanSo &);
           
};
 
#endif