#include <iostream>
#include "ThoiGian.h"
#include "ThoiGian.cpp"
#include <string>
using namespace std;

string inss(bool a)
{
	if (a)
		return "true";
	return "false";
}

int main()
{
	ThoiGian t1,t2;
	cout << "Nhap thoi gian thu nhat:\n";
	cin >> t1;
	cout << "t1 = " << t1;
	cout << "\nNhap thoi gian thu hai:\n";
	cin >> t2;
	cout << "t2 = "<< t2;
	cout << "\nKet qua cong 2 thoi gian:\n" << t1+t2;
	cout << "\nKet qua tru 2 thoi gian:\n" << t1-t2;
	t1++;
	cout << "\nt1++: " << t1;
	t1--;
	cout << "\nt1--: " << t1;
	cout << "\n++t2: " << ++t2;
	cout << "\n--t2: " << --t2;
	cout << "\nThuc hien so sanh 2 thoi gian:\n";
	bool ss = (t1 == t2);
	cout << "t1 == t2 = " << inss(ss) << endl;
	ss = (t1 != t2);
	cout << "\nt1 != t2 = " << inss(ss) << endl;
	ss = (t1 >= t2);
	cout << "\nt1 >= t2 = " << inss(ss) << endl;
	ss = (t1 <= t2);
	cout << "\nt1 <= t2 = " << inss(ss) << endl;
	ss = (t1 > t2);
	cout << "\nt1 > t2 = " << inss(ss) << endl;
	ss = (t1 < t2);
	cout << "\nt1 < t2 = " << inss(ss) << endl;
	system("pause");
	return 0;
}