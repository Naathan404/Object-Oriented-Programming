// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cGiaoDichVang.h"
#include "cGiaoDichTienTe.h"
#include "vector"

#pragma once
class cQuanLyGiaoDich
{
private:
	vector<cGiaoDichVang> DSGDVang;
	vector<cGiaoDichTienTe> DSGDTienTe;

public:
	void NhapDSGDVang(int);
	void NhapDSGDTienTe(int);
	void XuatDSGDVang() const;
	void XuatDSGDTienTe() const;
	
	void XuatGDVangCoThanhTienCaoNhat() const;
	// Truyen vao VND, USD hoac Euro, neu khong truyen thi mac dinh la all
	void XuatGDTienTeCoThanhTienThapNhat(string = "all") const;
	void XuatGDCoThanhTienTren1Ty() const;

};

