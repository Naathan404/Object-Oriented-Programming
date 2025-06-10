// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "SinhVien.h"
#pragma once
class SVCaoDang : public SinhVien
{
private:
	float diemTN;

public:
	SVCaoDang(int = 0, string = "", string = "", int = '0', float = 0, float = 0);

	float getDiemTN() const { return diemTN; };
	void setDiemTN(float dtn) { diemTN = dtn; }

	void Nhap() override;
	void Xuat() const override;
	bool XetTotNghiep() const override;

};

