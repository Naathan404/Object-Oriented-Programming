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
	cPhanSo(int = 0, int = 1);

	// Cac ham get/set
	int GetTu() const;
	int GetMau() const;
	void SetTu(int);
	void SetMau(int);
	void Set(int tu, int mau)
	{
		iTuSo = tu;
		iMauSo = mau;
	}

	// Ham xu ly
	void Nhap();
	void Xuat() const;
	cPhanSo RutGon();
	float DinhGiaTri() const;
	operator double()
	{
		return 1.0 * iTuSo / iMauSo;
	}
	void  operator=(int);
	friend cPhanSo operator+(cPhanSo, cPhanSo);
	friend cPhanSo operator-(cPhanSo, cPhanSo);
	friend cPhanSo operator*(cPhanSo, cPhanSo);
	friend cPhanSo operator/(cPhanSo, cPhanSo);

	//friend istream& operator>>(istream&, cPhanSo);
	//friend istream& operator>>(istream&, cPhanSo);

	// Ham da bo
	//cPhanSo Cong(cPhanSo);
	//cPhanSo Tru(cPhanSo);
	//cPhanSo Nhan(cPhanSo);
	//cPhanSo Chia(cPhanSo);
};

