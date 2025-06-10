// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "NhanVien.h"

#pragma once
class KiemChungVien : public NhanVien
{
private:
	float soLoi;

public:
	KiemChungVien(string = "", string = "", string = "", int = 0, int = 0, int = 0, float = 0.0);
	float getSoLoi() const { return soLoi; }
	void setSoLoi(float loi) { soLoi = loi; }

	void Nhap() override;
	void Xuat() const override;
	int TinhLuong() const override;
};

