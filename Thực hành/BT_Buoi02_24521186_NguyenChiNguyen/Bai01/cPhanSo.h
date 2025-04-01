// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once

class cPhanSo
{
private:
	int iTuSo;
	int iMauSo;

public:
	// Constructor
	cPhanSo();
	cPhanSo(int, int = 1);

	// Cac ham get/set
	int GetTu() const;
	int GetMau() const;
	void SetTu(int);
	void SetMau(int);

	// Ham xu ly
	void Nhap();
	void Xuat() const;
	cPhanSo RutGon();
	float DinhGiaTri() const;
	friend cPhanSo operator+(cPhanSo, cPhanSo);
	friend cPhanSo operator-(cPhanSo, cPhanSo);
	friend cPhanSo operator*(cPhanSo, cPhanSo);
	friend cPhanSo operator/(cPhanSo, cPhanSo);

	friend istream& operator>>(istream&, cPhanSo);
	friend istream& operator>>(istream&, cPhanSo);

	// Ham da bo
	//cPhanSo Cong(cPhanSo);
	//cPhanSo Tru(cPhanSo);
	//cPhanSo Nhan(cPhanSo);
	//cPhanSo Chia(cPhanSo);
};

