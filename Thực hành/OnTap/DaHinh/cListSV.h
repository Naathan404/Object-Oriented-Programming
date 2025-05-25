// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cSVCaoDang.h"
#include "cSVDaiHoc.h"
#include <vector>

#pragma once
class cListSV
{
private:
	vector<cSinhVien*> listSV;
	

public:
	void Nhap();
	void Xuat() const;
	
};

