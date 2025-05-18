#include <iostream>
using namespace std;

// Hàm tìm kiếm phần tử x trong mảng A (giảm dần)
int binarySearch(int A[], int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (A[mid] == x) {
            return mid; // Tìm thấy x, trả về vị trí
        } else if (A[mid] > x) {
            left = mid + 1; // Tiếp tục tìm phần bên phải
        } else {
            right = mid - 1; // Tiếp tục tìm phần bên trái
        }
    }

    return -1; // Không tìm thấy x trong mảng
}

int main() {
    int n; // Số phần tử trong mảng
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int A[n]; // Khai báo mảng A

    cout << "Nhap cac phan tu cua mang (giam dan): ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int x; // Phan tu can tim
    cout << "Nhap phan tu can tim: ";
    cin >> x;

    int result = binarySearch(A, n, x);
    if (result != -1) {
        cout << "Tim thay " << x << " tai vi tri " << result << endl;
    } else {
        cout << "Khong tim thay " << x << " trong mang." << endl;
    }

    return 0;
}