// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
#include <string>
using namespace std;

#pragma once
class SinhVien
{
protected:
	int MSSV;
	string hoTen;
	string diaChi;
	unsigned char tongTC;
	float diemTB;

public:
	SinhVien(int = 0, string = "", string = "", unsigned char = 0, float = 0.0);

	enum LOAI
	{
		MAC_DINH,
		DAI_HOC,
		CAO_DANG
	};

	LOAI loai;

	int getMSSV() const { return MSSV; }
	string getHoTen() const { return hoTen; }
	string getDiaChi() const { return diaChi; }
	unsigned char getTongTC() const { return tongTC; }
	float getDiemTB() const { return diemTB; }
	void setMSSV(int mssv) { MSSV = mssv; }
	void setHoTen(string hoten) { hoTen = hoten; }
	void setDiaChi(string diachi) { diaChi = diachi; }
	void setTongTC(unsigned char soTC) { tongTC = soTC; }
	void setDiemTB(float dtb) { diemTB = dtb; }

	virtual void Nhap();
	virtual void Xuat() const;
	virtual bool XetTotNghiep() const = 0;
};

