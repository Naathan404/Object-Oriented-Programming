#pragma once
class cPhanSo
{
private:
	int iTuSo, iMauSo;

public:
	cPhanSo();
	cPhanSo(int, int);
	int getTuSo();
	int getMauSo();
	void setTuSo(int tu);
	void setMauSo(int mau);
	void Nhap();
	void Xuat();
	//cPhanSo Cong(const cPhanSo);
	//cPhanSo Tru(const cPhanSo);
	//cPhanSo Nhan(const cPhanSo);
	//cPhanSo Chia(const cPhanSo);
};

