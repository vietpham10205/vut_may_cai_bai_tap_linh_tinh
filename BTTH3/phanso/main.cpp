#include <iostream>
#include "PhanSo.h"
#include "Phanso.cpp"
using namespace std;
int main() {
    PhanSo a;
    cin >> a;
    cout << "Phan so 1 la: " << a << endl;
    PhanSo b;
    cin >> b;
    cout << "Phan So 2 la: " << b << endl;
    PhanSo c = a + b;
    cout << "Tong 2 phan so = " << c << endl;

    PhanSo d = a - b;
    cout << "Hieu 2 phan so = " << d << endl;

    PhanSo e = a * b;
    cout << "Tich 2 phan so = " << e << endl;

    PhanSo f = a / b;
    cout << "Thuong 2 phan so = " << f << endl;

    if (a == b)
        cout << "Phan so 1 bang Phan so 2" << endl;
    else
        cout << "Phan so 1 khong bang Phan so 2" << endl;

    if (a != b)
        cout << "Phan so 1 khac Phan so 2" << endl;
    else
        cout << "Phan so 1 bang Phan so 2" << endl;

    if (a >= b)
        cout << "Phan so 1 lon hon hoac bang Phan so 2" << endl;
    else
        cout << "Phan so 1 nho hon Phan so 2" << endl;

    if (a <= b)
        cout << "Phan so 1 nho hon hoac bang Phan so 2" << endl;
    else
        cout << "Phan so 1 lon hon Phan so 2" << endl;

    if (a > b)
        cout << "Phan so 1 lon hon Phan so 2" << endl;
    else
        cout << "Phan so 1 nho hon hoac bang Phan so 2" << endl;

    if (a < b)
        cout << "Phan so 1 nho hon Phan so 2" << endl;
    else
        cout << "Phan so 1 lon hon hoac bang Phan so 2" << endl;

    return 0;
}
