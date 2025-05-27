// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
#include "GDBatDongSan.h"
class GDNhaPho : public GDBatDongSan
{
private:
	unsigned char loaiNha; // 1: thuong, 2: cao cap
	string diaChi;

public:
	GDNhaPho(string = "", cDate = cDate(), int = 0, int = 0, unsigned char = 1, string = "");
	
	unsigned char getLoaiNha() const;
	void setLoaiNha(unsigned char);
	string getDiaChi() const;
	void setDiaChi(string);

	void Nhap() override;
	void Xuat() const override;
	int TinhThanhTien() const override;
};

