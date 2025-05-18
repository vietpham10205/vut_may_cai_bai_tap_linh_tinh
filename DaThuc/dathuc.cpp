#include <iostream>
#include <vector>

using namespace std;

class DaThuc {
    private:
        vector<float> heSo; // Lưu trữ các hệ số của đa thức
    public:
        DaThuc() : heSo(0) {}
        DaThuc(const vector<float>& heSo) : heSo(heSo) {}
        
        // Hàm truy cập hệ số tại vị trí i
          float getHeSo(int i) const {
            if (i < 0 || i >= heSo.size()) {
              return 0; // Lấy giá trị 0 nếu truy cập vượt quá giới hạn
            }
            return heSo[i];
          }
        // Hàm thiết lập hệ số tại vị trí i
          void setHeSo(int i, float value) {
            if (i < 0) {
              return; // Bỏ qua nếu truy cập vị trí âm
            }
            if (i >= heSo.size()) {
              heSo.resize(i + 1, 0); // Mở rộng vector nếu cần thiết
            }
            heSo[i] = value;
          }
          
        // Hàm cộng hai đa thức
        DaThuc operator+(const DaThuc& other)  {
                DaThuc result;
                int maxDegree = max(this->heSo.size(), other.heSo.size());
                
                for (int i = 0; i < maxDegree; i++) {
                  result.setHeSo(i, getHeSo(i) + other.getHeSo(i));
                }
                return result;
              }
        // Hàm xuất đa thức 
        friend ostream& operator<<(ostream& os, const DaThuc& daThuc) {
                for (int i = daThuc.heSo.size()-1 ; i >= 0; i--) {
                  if (daThuc.getHeSo(i) != 0) {
                    if (i == 0) {
                      os << daThuc.getHeSo(i);
                    } else {
                      os << daThuc.getHeSo(i) << "x^" << i;
                    }
                    if (i > 0 && daThuc.getHeSo(i - 1) > 0) {
                      os << "+";
                    }
                  }
                }
                return os;
              }
              
        // Hàm nhập đa thức từ dòng nhập
              friend istream& operator>>(istream& is, DaThuc& daThuc) {
                int degree;
                float heSo;
                daThuc.heSo.clear(); // Xóa dữ liệu cũ
                cout<< "Nhap bac cua da thuc: ";
                is >> degree; // Nhập bậc đa thức
                for (int i = 0; i <= degree; ++i) {
                  is >> heSo; // Nhập hệ số cho từng bậc
                  daThuc.heSo.push_back(heSo);
                }
                return is;
              }
            };
            
int main()
{
    DaThuc a, b,d;
    DaThuc c ({3.0,7.0,4.0,5.0});
    cout <<"da thuc mac dinh c: "<<c<<endl;
    cin >>a;
    cout <<"da thuc 1: "<<a<<endl;
    cin >>b;
    cout <<"da thuc 2: "<<b<<endl;
    d= a+b;
    cout <<"Tong da 2 thuc da nhap la: "<<d<<endl;
    
    return 0;
}
