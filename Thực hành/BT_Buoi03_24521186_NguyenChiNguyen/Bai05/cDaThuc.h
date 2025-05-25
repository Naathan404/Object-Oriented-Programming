// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDonThuc.h"
#include "vector"

#pragma once
class cDaThuc
{
private:
	std::vector<cDonThuc> List;

public:
	cDaThuc(int = 0);
	void Nhap();
	void Xuat() const;
	// Tinh gia tri cua da thuc khi x duoc truyen vao
	float TinhGiaTri(float) const;
	// Dinh nghia lai toan tu + va tru de dung cho viec tinh toan voi cDaThuc
	cDaThuc operator+(cDaThuc) const;
	cDaThuc operator-(cDaThuc) const;

};

