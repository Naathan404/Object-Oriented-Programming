// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cNVSanXuat.h"
#include "cNVVanPhong.h"
#include "vector"

#pragma once
class cQuanLyNV
{
private:
	vector<cNVSanXuat> List_NVSanXuat;
	vector<cNVVanPhong> List_NVVanPhong;
	
public:
	void NhapDSNVSanXuat(int);
	void NhapDSNVVanPhong(int);
	void XuatDSNVSanXuat() const;
	void XuatDSNVVanPhong() const;
	int TinhTongLuong() const;
};

