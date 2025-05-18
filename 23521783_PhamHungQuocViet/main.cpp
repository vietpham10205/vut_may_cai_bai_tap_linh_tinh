#include <iostream>
#include <vector>
#include <cmath>
#include"Thanhvien.h"
#include "Giamdoc.h"
#include "Daily.h"
#include "NDT.h"
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<Thanhvien*> nguoi(n);
 
   for (int i = 0; i < n; i++) {
        int id, loai, cap;
        std::string ten;
        std::cin >> id >> loai ;
        cin.ignore();
        cin>> ten;
        if (loai == 1) {nguoi[i] = new Giamdoc();}
        if (loai == 2) {
            std::cin >> cap;
            nguoi[i] = new Daily(id, ten, cap);
        } else if (loai == 3) {
            int idDaiLy;
            double soCoin;
            std::cin >> idDaiLy ;
            soCoin =0;
            nguoi[i] = new NDT(id, ten, idDaiLy, soCoin);
        }
    }
    
    vector<double> coinCuoiThang(n);
    
      for (int i = 0; i < m; ++i) {
        int thang;
        std::cin >> thang;
        for (int j = 1; j < n; ++j) {
            double soCoin;
            std::cin >> soCoin;
            coinCuoiThang[j] += soCoin;
        }
    }

    for (const auto& ng : nguoi) {
        ng->hienThiThongTin();
    }

    for (const auto& ng : nguoi) {
        delete ng;
    }

    return 0;
}
