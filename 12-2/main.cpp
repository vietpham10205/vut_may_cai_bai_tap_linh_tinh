#include<iostream>
#include"intarr.cpp"
using namespace std;

int main() {
IntArr l1;//tạo mảng không chứa bất kì phần tử nào
IntArr l2(3,2);// tạo một mảng với 3 phần tử, tất cả phần tử đều có giá trị là 2
IntArr l3(2);//tạo một mảng với 2 phần tử, tất cả phần tử đều có giá trị là 0
IntArr l4 = l2.concat(l3);//tạo ra một IntArr mới có nội dung là kết quả của việc nối các phần tử l3 vào cuối các phần tử của l2 theo thứ tự
l2.push(3);//thêm số 3 vào cuối danh sách trong đối tượng l2
cin >> l2;//Xoá các giá trị hiện có trong l2 và cho phép người dùng nhập số lượng phần tử mới và giá trị các phần tử mới vào l2 (cần xoá các vùng nhớ không sử dụng nếu có)
cout << l2;//in ra các số nguyên có trong danh sách Khi vượt quá phạm vi sử dụng cần huỷ tất cả các vùng nhớ được cấp phát cho các values của IntArr
return 0;



}