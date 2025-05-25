// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDiem.h"
#pragma once

class cTamGiac
{
private:
	cDiem A, B, C;

public:
	// Constructor
	cTamGiac(float xA = 0, float yA = 0, float xB = 0, float yB = 0, float xC = 0, float yC = 0) : A(xA,yA), B(xB, yB), C(xC, yC) {}
	void Nhap();
	void Xuat() const;
	// Kiem tra tam giac loai deu, can, vuong can, vuong hay thuong
	string KiemTraLoaiTamGiac() const;
	float TinhChuVi() const;
	float TinhDienTich() const;
	// TinhTien(float X, float Y), tinh tien tam giac x don vi theo truc hoanh va y don vi theo truc tung
	void TinhTien(float = 0, float = 0);	
	// QuayGoc90Do(bool ChieuQuay), ChieuQuay = true => Quay theo chieu kim dong ho, ChieuQuay = false => Quay nguoc chieu kim dong ho
	void QuayGoc90Do(bool);					
	// ThayDoiKichThuoc(float he_so), he_so > 1 neu phong to, 0 < he_so < 1 neu thu nho
	void ThayDoiKichThuoc(float);	
	// Ve tam giac bang graphics.h
	void Ve() const;

	//
	static bool KiemTraVuong(cDiem, cDiem, cDiem);
	static bool KiemTraTamGiacHopLe(cDiem, cDiem, cDiem);
	static float TinhKhoangCachHaiDiem(cDiem, cDiem);
};

