#pragma once
#include <iostream>
class KhachSan
{
protected:
	int iSoDem;
public:
	
	KhachSan(int);
	virtual int tinhDoanhThu() = 0;
};

