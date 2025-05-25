#pragma once
#include <iostream>
#include <string>
#include "cDate.h"
using namespace std;


class HoaDon
{
protected:
	string maKH, tenKH, diaChi;
	int chiSoDienKyTruoc, chiSoDienHienTai;
	int soTienThanhToan;
	cDate ngay;

public:
	enum LoaiHoaDon
	{
		MAC_DINH,
		DOANH_NGHIEP,
		HO_GIA_DINH
	};

	LoaiHoaDon loai;

	HoaDon() : maKH(""), tenKH(""), diaChi(""), chiSoDienKyTruoc(0), chiSoDienHienTai(0), soTienThanhToan(0), ngay(), loai(MAC_DINH) {}
	HoaDon(string, string, string, int, int, int, cDate);
	
	string getMaKH() const;
	string getTenKH() const;
	string getDiaChi() const;
	int getChiSoDienKyTruoc() const;
	int getChiSoDienHienTai() const;
	int getSoTienThanhToan() const;
	cDate getNgay() const;
	void setMaKH(string);
	void setTenKH(string);
	void setDiaChi(string);
	void setChiSoDienKyTruoc(int);
	void setChiSoDienHienTai(int);
	void setSoTienThanhToan(int);
	void setNgay(int, int, int);

	virtual void Nhap();
	virtual void Xuat() const;
	virtual int TinhTienDien() = 0;
	int TinhSoDienTieuThu() const;

};

