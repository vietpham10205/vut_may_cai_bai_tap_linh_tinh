#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    float x, y;
};

// Tính khoảng cách giữa hai điểm
float distance(Point p1, Point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

// Tìm điểm q gần nhất với p trong danh sách A
int findNearestPoint(Point A[], int n, Point p) {
    float minDist = distance(A[0], p);
    int nearestIndex = 0;

    for (int i = 1; i < n; i++) {
        float dist = distance(A[i], p);
        if (dist < minDist) {
            minDist = dist;
            nearestIndex = i;
        }
    }

    return nearestIndex;
}

int main() {
    int n;
    cout << "Nhap so luong diem: ";
    cin >> n;

    Point A[n];
    cout << "Nhap toa do cac diem (x y): ";
    for (int i = 0; i < n; i++) {
        cin >> A[i].x >> A[i].y;
    }

    Point p;
    cout << "Nhap toa do diem p (x y): ";
    cin >> p.x >> p.y;

    int nearestIndex = findNearestPoint(A, n, p);
    cout << "Diem q gan nhat voi p la diem thu " << nearestIndex + 1 << endl;

    return 0;
}
