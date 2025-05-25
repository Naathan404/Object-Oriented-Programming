// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
using namespace std;
#pragma once

class cSoPhuc
{
private:
	float fThuc, fAo;

public:
	// Ham thiet lap
	cSoPhuc(float = 0, float = 0);

	// Ham set/get
	float getThuc() const;
	float getAo() const;
	void setThuc(float);
	void setAo(float);

	// Cac ham thanh phan
	friend istream& operator>>(istream&, cSoPhuc&);
	friend ostream& operator<<(ostream&, cSoPhuc);
	friend cSoPhuc operator+(cSoPhuc, cSoPhuc);
	friend cSoPhuc operator-(cSoPhuc, cSoPhuc);
	friend cSoPhuc operator*(cSoPhuc, cSoPhuc);
	friend cSoPhuc operator/(cSoPhuc, cSoPhuc);
	friend bool operator==(cSoPhuc, cSoPhuc);
	friend bool operator!=(cSoPhuc, cSoPhuc);
};
