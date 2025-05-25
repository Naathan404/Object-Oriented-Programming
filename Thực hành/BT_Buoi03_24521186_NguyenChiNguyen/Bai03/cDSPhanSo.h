// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cPhanSo.h"
#include "vector"

#pragma once
class cDSPhanSo
{
private:
	std::vector<cPhanSo> DSPhanSo;

public:
	// Constructor
	cDSPhanSo(int = 0);

	// Nhap danh sach phan so
	void Nhap();
	// Xuat danh sach phan so
	void Xuat() const;	
	// Tra ve phan so ket qua la tong cua cac phan so trong danh sach
	cPhanSo TinhTongCacPhanSo() const;
	// Tra ve phan so lon nhat trong danh sach
	cPhanSo TimPhanSoLonNhat() const;
	// Tra ve phan so nho nhat trong danh sach
	cPhanSo TimPhanSoNhoNhat() const;
	// Tra ve phan so co tu so la so nguyen to lon nhat trong danh sach
	cPhanSo TimPhanSoCoTuNguyenToLonNhat() const;
	// Truyen vao <true> neu sap xep tang dan, <false> neu sap xep giam dan
	void SapXep(bool);
};

