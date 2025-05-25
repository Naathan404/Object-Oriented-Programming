// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
#include "cNhanVien.h"
class cNVVanPhong : public cNhanVien
{
private:
	int iSoNgayLamViec;

public:
	cNVVanPhong(string = "", cDate = cDate(), int = 0);

	int getSoNgayLamViec() const { return iSoNgayLamViec; }
	void setSoNgayLamViec(int songay) { iSoNgayLamViec = songay; }

	void Nhap();
	void Xuat() const;
	int TinhLuong() const;
};

