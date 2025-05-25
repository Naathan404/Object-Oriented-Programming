// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDiem.h"

#pragma once
class cDaGiac
{
private:
	cDiem* DSDiem;
	int iSoDinh;

public:
	// Constructor
	cDaGiac(int = 0);
	// Tra ve so luong dinh cua da giac
	int getSoDinh();
	// Nhap da giac
	void Nhap();
	// Xuat ra cac dinh cua da giac
	void Xuat() const;
	// Kiem tra da giac deu hay khong
	bool KiemTraDeu() const;		
	// Kiem tra hinh dang da giac loi hay lom
	bool KiemTraHinhDang() const;
	// Tra ve chu vi cua da giac
	float TinhChuVi() const;
	// Tra ve dien tich cua da giac
	float TinhDienTich() const;
	// TinhTien(float x, float y) => Da giac dich chuyen theo truc hoanh x don vi, truc tung y don vi
	void TinhTien(float = 0, float = 0);
	// Truyen vao <true> neu quay theo chieu kim dong ho, <false> neu quay nguoc chieu kim dong ho
	void QuayGoc90Do(bool);
	// ThayDoiKichThuoc(float he_so) => he_so > 1 neu phong to, 0 < he_so < 1 neu thu nho
	void ThayDoiKichThuoc(float);
	// Ve da giac tren do thi dung graphics.h
	void Ve() const;

	// Destructor
	~cDaGiac();
};

