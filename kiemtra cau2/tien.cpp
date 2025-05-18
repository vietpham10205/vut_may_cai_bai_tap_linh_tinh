#include<iostream>
#include <string>
#include"tien.h"
using namespace std;

int main()
{
    tien a;
cin >> a; // a = 10000
cout << a;
tien b(5010);
tien c;
c = a + b;
cout<<c;
c = a - b;
cout <<c;

++a;
cout<< a;
--a;
cout<< a;
return 0;
}