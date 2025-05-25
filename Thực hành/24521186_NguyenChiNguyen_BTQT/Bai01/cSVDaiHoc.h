//Mã số sinh viên: 24521186
//Họ và tên: Nguyễn Chí Nguyên
//Ngày sinh: 10/03/2006
//Lớp: IT002.P26.2

#include <iostream>
using namespace std;

#pragma once
class cSVDaiHoc
{
private:
	int iMaSoSV, iTongSoTC;
	string sHoTen, sDiaChi, sTenLuanVan;
	float fDiemTrungBinh, fDiemLuanVan;

public:
	cSVDaiHoc(int = 0, string = "null", string = "null", int = 0, float = 0, string = "null", float = 0);

	void setMaSoSV(int);
	void setTongSoTC(int);
	void setHoTen(string);
	void setDiaChi(string);
	void setTenLuanVan(string);
	void setDiemTB(float);
	void setDiemLuanVan(float);
	int getMaSoSV() const;
	int getTongSoTC() const;
	string getHoTen() const;
	string getDiaChi() const;
	string getTenLuanVan() const;
	float getDiemTB() const;
	float getDiemLuanVan() const;

	void Nhap();
	void Xuat() const;
	bool DuDieuKienTotNghiep() const;

};

