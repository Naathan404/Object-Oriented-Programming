// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
#include "cHocVien.h"
class cNguoiDiLam : public cHocVien
{
private:
	string noiLamViec;

public:
	cNguoiDiLam(string = "", string = "", cDate = cDate(), unsigned char = '1', int = 0, string = "");
	
	string getNoiLamViec() const;
	void setNoiLamViec(string);
	
	void Nhap() override;
	void Xuat() const override;
	int TinhHocPhi() const override;
};

