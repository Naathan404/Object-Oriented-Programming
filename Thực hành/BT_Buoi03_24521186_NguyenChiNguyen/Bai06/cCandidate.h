// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDate.h"
#include <string>
#include <iostream>
using namespace std;

#pragma once
class cCandidate
{
private:
	string sMaTS;
	string sName;
	cDate ngaySinh;
	float fDiemToan, fDiemVan, fDiemAnh;

public:
	cCandidate(string ma = "null", string ten = "null", int d = 1, int m = 1, int y = 1, float toan = 0, float van = 0, float anh = 0) : ngaySinh(d, m, y)
	{
		sMaTS = ma;
		sName = ten;
		fDiemToan = toan;
		fDiemVan = van;
		fDiemAnh = anh;
	}

	string getMaTS() const { return sMaTS; }
	string getName() const { return sName; }
	int getNgaySinh() const { return ngaySinh.getNgay(); }
	int getThangSinh() const { return ngaySinh.getThang(); }
	int getNamSinh() const { return ngaySinh.getNam(); }
	float getDiemToan() const { return fDiemToan; }
	float getDiemVan() const { return fDiemVan; }
	float getDiemAnh() const { return fDiemAnh; }

	void setMaTS(string ma) { sMaTS = ma; }
	void setName(string ten) { sName = ten; }
	void setNgaySinh(int d) { ngaySinh.setNgay(d); }
	void setThangSinh(int d) { ngaySinh.setThang(d); }
	void setNamSinh(int d) { ngaySinh.setNam(d); }
	void setDiemToan(float d) { fDiemToan = d; }
	void setDiemVan(float d) { fDiemVan = d; }
	void setDiemAnh(float d) { fDiemAnh = d; }
	
	void Nhap();
	void Xuat() const;
	float TinhTongDiem() const;
};

