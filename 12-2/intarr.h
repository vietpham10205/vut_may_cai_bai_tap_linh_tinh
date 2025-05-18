#include<iostream>
#pragma once

using namespace std;


class IntArr 
{
private:
int count; //tổng số lượng phần tử có trong values
int * values; //mảng các số nguyên đang có trong đối tượng hiện tại
public:
IntArr(){};
IntArr(int spt);
IntArr(int spt, int gt);
    
void push(int giatri);
IntArr concat(IntArr mang);
friend istream & operator>>(istream &x, IntArr & y);
friend ostream & operator<<(ostream &x, IntArr & y);

};