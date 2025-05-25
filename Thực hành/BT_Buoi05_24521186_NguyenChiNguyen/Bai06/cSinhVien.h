// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
#include <string>
using namespace std;

#pragma once
class cSinhVien
{
protected:
	int iMSSV;
	string sHoTen;
	string sDiaChi;
	unsigned char iTongTC;
	float fDiemTB;

public:
	cSinhVien(int = 0, string = "", string = "", unsigned char = 0, float = 0.0);

	int getMSSV() const { return iMSSV; }
	string getHoTen() const { return sHoTen; }
	string getDiaChi() const { return sDiaChi; }
	unsigned char getTongTC() const { return iTongTC; }
	float getDiemTB() const { return fDiemTB; }
	void setMSSV(int mssv) { iMSSV = mssv; }
	void setHoTen(string hoten) { sHoTen = hoten; }
	void setDiaChi(string diachi) { sDiaChi = diachi; }
	void setTongTC(unsigned char soTC) { iTongTC = soTC; }
	void setDiemTB(float dtb) { fDiemTB = dtb; }

	void Nhap();
	void Xuat() const;
};

