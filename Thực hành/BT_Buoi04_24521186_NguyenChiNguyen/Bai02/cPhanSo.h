// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
using namespace std;
#pragma once

class cPhanSo
{
private:
	int iTuSo;
	int iMauSo;

public:
	// Constructor
	cPhanSo(int = 0, int = 1);

	// Cac ham get/set
	int GetTu() const;
	int GetMau() const;
	void SetTu(int);
	void SetMau(int);

	// Ham xu ly
	cPhanSo RutGon();
	float DinhGiaTri() const;
	//operator double()
	//{
	//	return 1.0 * iTuSo / iMauSo;
	//}
	friend istream& operator>>(istream&, cPhanSo&);
	friend ostream& operator<<(ostream&, cPhanSo);
	friend cPhanSo operator+(cPhanSo, cPhanSo);
	friend cPhanSo operator-(cPhanSo, cPhanSo);
	friend cPhanSo operator*(cPhanSo, cPhanSo);
	friend cPhanSo operator/(cPhanSo, cPhanSo);
	friend bool operator==(cPhanSo, cPhanSo);
	friend bool operator>(cPhanSo, cPhanSo);
	friend bool operator<(cPhanSo, cPhanSo);

};

