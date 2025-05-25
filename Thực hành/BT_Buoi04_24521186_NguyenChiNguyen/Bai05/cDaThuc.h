// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDonThuc.h"
#include "vector"

#pragma once
class cDaThuc
{
private:
	std::vector<cDonThuc> List;

public:
	// Khoi tao da thuc bac 0 voi he so do nguoi dung thiet lap
	cDaThuc(int = 0);
	// Tinh gia tri cua da thuc khi x duoc truyen vao
	float TinhGiaTri(float) const;
	// Operators
	friend istream& operator>>(istream&, cDaThuc&);
	friend ostream& operator<<(ostream&, cDaThuc);
	friend cDaThuc operator+(cDaThuc, cDaThuc);
	friend cDaThuc operator-(cDaThuc, cDaThuc);
	//friend cDaThuc operator*(cDaThuc, cDaThuc);
	//friend cDaThuc operator/(cDaThuc, cDaThuc);
};

