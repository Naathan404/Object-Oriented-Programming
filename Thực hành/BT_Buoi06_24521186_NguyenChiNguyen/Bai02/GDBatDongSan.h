// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "string"
#include "cDate.h"
#include <iostream>	
using namespace std;

#pragma once
class GDBatDongSan
{
protected:
	string maGD;
	cDate ngayGD;
	int donGia;
	int dienTich;
	int thanhTien;

public:
	enum LOAI
	{
		MAC_DINH,
		DAT,
		NHA_PHO,
		CAN_HO_CHUNG_CU
	};
	LOAI loai;

	GDBatDongSan(string = "", cDate = cDate(), int = 0, int = 0);

	string getMaGD() const;
	cDate getNgayGD() const;
	int getDonGia() const;
	int getDienTich() const;
	int getThanhTien() const;
	void setMaGD(string);
	void setNgayGD(cDate);
	void setDonGia(int);
	void setDienTich(int);
	void setThanhTien(int);


	virtual void Nhap();
	virtual void Xuat() const;
	virtual int TinhThanhTien() const = 0;
};

