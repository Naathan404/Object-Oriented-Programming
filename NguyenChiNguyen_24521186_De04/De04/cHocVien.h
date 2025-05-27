// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <string>
#include <iostream>
#include "cDate.h"
using namespace std;
// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
class cHocVien
{
protected:
	string maHV;
	string hoTen;
	cDate ngaySinh;
	unsigned char khoaHoc; // 1: Cơ bản, 2: Ielts, 3: Toeic
	int tongSoBuoiHoc;
	int hocPhi;

public:
	cHocVien(string = "", string = "", cDate = cDate(), unsigned char = '1', int = 0);

	enum LOAI
	{
		MAC_DINH,
		HS_SV,
		NGUOI_DI_LAM
	};

	LOAI loai;

	string getMaHV() const;
	void setMaHV(string);
	string getHoTen() const;
	void setHoTen(string);
	cDate getNgaySinh() const;
	void setNgaySinh(cDate);
	unsigned char getKhoaHoc() const;
	void setKhoaHoc(unsigned char);
	int getTongSoBuoiHoc() const;
	void setTongSoBuoiHoc(int);
	int getHocPhi() const { return hocPhi; }


	virtual void Nhap();
	virtual void Xuat() const;
	virtual int TinhHocPhi() const = 0;
};

