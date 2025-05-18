#pragma once
class Diem
{
    private:
        float iHoanh;
        float iTung;
    public:
        Diem();
        Diem(float Hoanh, float Tung );//tham số mặc định phải nàm ở đầu
        Diem(const Diem &x);
        void Xuat();
        void GetTungdo();
        void GetHoanhdo();
        void SetTungdo(float b);
        void SetHoanhdo(float a);
        void Tinhtien(float a, float b);
        float khoangcach(Diem a);

};

class tamgiac
{
    private:
    Diem a,b,c;
    public:
    tamgiac():a(),b(),c(){};
    tamgiac(Diem f, Diem g, Diem h);
    void nhaptamgiac();
    void xuattamgiac();
    void tinhtientamgiac(float x, float y);
    float chuvi();
    float dientich();
};