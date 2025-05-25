// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <string>
#include "cDate.h"
using namespace std;

#pragma once
class cNhanVienSX
{
private:
	string sMaNV;
	string sName;
	cDate ngaySinh;
	int iSoSanPham;
	int iDonGia;
	int iLuong;

public:
	cNhanVienSX(string = "null", string = "null", int = 1, int = 1, int = 1, int = 0, int = 0);

	// 
	string getMaNV() const { return sMaNV; }
	string getName() const { return sName; }
	int getNgaySinh() const { return ngaySinh.getNgay(); }
	int getThangSinh() const { return ngaySinh.getThang(); }
	int getNamSinh() const { return ngaySinh.getNam(); }
	int getSoSP() const { return iSoSanPham; }
	int getDonGia() const { return iDonGia; }
	int getLuong() const { return iLuong; }
	void setMaTS(string ma) { sMaNV = ma; }
	void setName(string ten) { sName = ten; }
	void setNgaySinh(int d) { ngaySinh.setNgay(d); }
	void setThangSinh(int d) { ngaySinh.setThang(d); }
	void setNamSinh(int d) { ngaySinh.setNam(d); }
	void setSoSP(int sosp) { iSoSanPham = sosp; iLuong = iSoSanPham * iDonGia; }
	void setDonGia(int gia) { iDonGia = gia; iLuong = iSoSanPham * iDonGia; }
	//

	void Nhap();
	void Xuat() const;
	void TinhLuong();

};