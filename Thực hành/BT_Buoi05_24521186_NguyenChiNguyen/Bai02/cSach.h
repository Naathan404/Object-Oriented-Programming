// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDate.h"
#include "string"
#include "iostream"
using namespace std;

//Mã sách, ngày nhập, đơn giá, số lượng, nhà xuất bản,
#pragma once
class cSach
{
protected:
	string sMaSach, sNXB;
	cDate NgayNhap;
	int iDonGia, iSoLuong;

public:
	string getMaSach() const { return sMaSach; }
	cDate getNgayNhap() const { return NgayNhap; }
	int getDonGia() const { return iDonGia; }
	int getSoLuong() const { return  iSoLuong; }
	string getNXB() const { return sNXB; }
	void setMaSach(string masach) { sMaSach = masach; }
	void setNgayNhap(cDate ngaynhap) { NgayNhap = ngaynhap; }
	void setDonGia(int dongia) { iDonGia = dongia; }
	void setSoLuong(int sl) { iSoLuong = sl; }
	void setNXB(string nxb) { sNXB = nxb; }

	void Nhap();
	void Xuat() const;
	int TinhThanhTien() const { return 0; }
};

