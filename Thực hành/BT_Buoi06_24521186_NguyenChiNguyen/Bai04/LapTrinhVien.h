// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "NhanVien.h"

#pragma once
class LapTrinhVien : public NhanVien
{
private:
	float soGioOvertime;

public:
	LapTrinhVien(string = "", string = "", string = "", int = 0, int = 0, int = 0, float = 0.0);

	float getSoGioOvertime() const { return soGioOvertime; }
	void setSoGioOvertime(float sogio) { soGioOvertime = sogio; }

	void Nhap() override;
	void Xuat() const override;
	int TinhLuong() const override;
};

