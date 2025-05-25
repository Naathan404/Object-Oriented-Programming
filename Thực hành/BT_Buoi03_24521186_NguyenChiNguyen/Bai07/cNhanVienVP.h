// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <string>
#include "cDate.h"
using namespace std;

#pragma once
class cNhanVienVP
{
private:
	string sMaNV;
	string sName;
	cDate ngaySinh;
	int iLuong;

public:
	cNhanVienVP(string = "null", string = "null", int = 1, int = 1, int = 1, int = 0);

	// 
	string getMaNV() const { return sMaNV; }
	string getName() const { return sName; }
	int getNgaySinh() const { return ngaySinh.getNgay(); }
	int getThangSinh() const { return ngaySinh.getThang(); }
	int getNamSinh() const { return ngaySinh.getNam(); }
	int getLuong() const { return iLuong; }
	void setMaTS(string ma) { sMaNV = ma; }
	void setName(string ten) { sName = ten; }
	void setNgaySinh(int d) { ngaySinh.setNgay(d); }
	void setThangSinh(int d) { ngaySinh.setThang(d); }
	void setNamSinh(int d) { ngaySinh.setNam(d); }
	void setLuong(int luong) { iLuong = luong; }
	//

	void Nhap();
	void Xuat() const;
};