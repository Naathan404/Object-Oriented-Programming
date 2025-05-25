// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
using namespace std;
#pragma once

class cDate
{
private:
	int iNgay, iThang, iNam;

public:
	// Constructors
	cDate(int = 1, int = 1, int = 1);

	// Ham gets/sets
	int getNgay() const;
	int getThang() const;
	int getNam() const;
	void setNgay(int);
	void setThang(int);
	void setNam(int);

	// Operators
	friend istream& operator>>(istream&, cDate&);
	friend ostream& operator<<(ostream&, cDate);
	// Cong them mot so ngay
	cDate operator+(int);
	// Tru di mot so ngay
	cDate operator-(int);
	// Khoang cach giua hai cDate tinh bang ngay
	int operator-(cDate);
	// Tang 1 ngay
	cDate& operator++();
	cDate operator++(int);
	// Giam 1 ngay
	cDate& operator--();
	cDate operator--(int);

	// Ham phu tro
	void HieuChinh();
	bool KiemTraNamNhuan() const;
};

