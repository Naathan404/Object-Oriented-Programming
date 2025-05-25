// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
using namespace std;
#pragma once

class cTime
{
private:
	int iGio, iPhut, iGiay;

public:
	cTime(int = 0, int = 0, int = 0);

	int getGio() const;
	int getPhut() const;
	int getGiay() const;
	void setGio(int);
	void setPhut(int);
	void setGiay(int);

	void InDongHo();

	cTime operator+(int);
	cTime operator-(int);
	cTime &operator++();
	cTime operator++(int);
	cTime &operator--();
	cTime operator--(int);
	friend istream& operator>>(istream&, cTime&);
	friend ostream& operator<<(ostream&, cTime);

};

  