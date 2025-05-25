// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
#include "cGiaoDichBDS.h"
class cGDNhaPho : public cGiaoDichBDS
{
private:
	string sLoaiNha, sDiaChi;

public:
	cGDNhaPho(string = "", cDate = cDate(), float = 0, float = 0, string = "", string = "");

	string getLoaiNha() const { return sLoaiNha; }
	void setLoaiNha(string loainha) { sLoaiNha = loainha; }
	string getDiaChi() const { return sDiaChi; }
	void setDiaChi(string diachi) { sDiaChi = diachi; }

	void Nhap();
	void Xuat();
	float TinhThanhTien() const;
};

