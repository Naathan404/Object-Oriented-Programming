// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
#include "SinhVien.h"

class SVDaiHoc : public SinhVien
{
private:
	string tenLV;
	float diemLV;

public:
	SVDaiHoc(int = 0, string = "", string = "", unsigned char = 0, float = 0.0, string = "", float = 0.0);
	string getTenLV() const { return tenLV; }
	float getDiemLV() const { return diemLV; }
	void setTenLV(string tenlv) { tenLV = tenlv; }
	void setDiemLV(float dlv) { diemLV = dlv; }
	void Nhap() override;
	void Xuat() const override;
	bool XetTotNghiep() const override;
	
};

