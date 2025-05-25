// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
#include "cSach.h"

class cSachThamKhao : public cSach
{
private:
	int iThue;

public:
	int getThue() const { return iThue; }
	void setThue(int thue) { iThue = thue; }

	void Nhap();
	void Xuat() const;
	int TinhThanhTien() const;
};

