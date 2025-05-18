#include <iostream>
#include <string>
#include <vector>

class Sach {
public:
    Sach(const std::string& tenSach) : tenSach_(tenSach) {}
    virtual void hienThiThongTin() const {
        std::cout << "Tên sách: " << tenSach_ << std::endl;
    }
private:
    std::string tenSach_;
};

class SachGiaoKhoa : public Sach {
public:
    SachGiaoKhoa(const std::string& tenSach, const std::string& monHoc)
        : Sach(tenSach), monHoc_(monHoc) {}
    void hienThiThongTin() const override {
        std::cout << "Sách giáo khoa - ";
        Sach::hienThiThongTin();
        std::cout << "Môn học: " << monHoc_ << std::endl;
    }
private:
    std::string monHoc_;
};

class TieuThuyet : public Sach {
public:
    TieuThuyet(const std::string& tenSach, const std::string& tacGia)
        : Sach(tenSach), tacGia_(tacGia) {}
    void hienThiThongTin() const override {
        std::cout << "Tiểu thuyết - ";
        Sach::hienThiThongTin();
        std::cout << "Tác giả: " << tacGia_ << std::endl;
    }
private:
    std::string tacGia_;
};

class TapChi : public Sach {
public:
    TapChi(const std::string& tenSach, int soPhatHanh)
        : Sach(tenSach), soPhatHanh_(soPhatHanh) {}
    void hienThiThongTin() const override {
        std::cout << "Tạp chí - ";
        Sach::hienThiThongTin();
        std::cout << "Số phát hành: " << soPhatHanh_ << std::endl;
    }
private:
    int soPhatHanh_;
};

int main() {
    std::vector<Sach*> danhSachSach;
    danhSachSach.push_back(new SachGiaoKhoa("Toán học 101", "Toán"));
    danhSachSach.push_back(new TieuThuyet("Người về từ cõi chết", "Nguyễn Nhật Ánh"));
    danhSachSach.push_back(new TapChi("Science Today", 42));

    for (const auto& sach : danhSachSach) {
        sach->hienThiThongTin();
    }

    // Giải phóng bộ nhớ
    for (const auto& sach : danhSachSach) {
        delete sach;
    }

    return 0;
}
