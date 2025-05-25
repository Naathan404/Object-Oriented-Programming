// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cChuyenXe.h"

#pragma once
class cChuyenXeNgoaiThanh : public cChuyenXe
{
private:
	string sDiemDen;
	int iSoNgay;

public:
	cChuyenXeNgoaiThanh(int = 0, string = "null", int = 0, int = 0, string = "null", int = 0);

	string getDiemDen() const { return sDiemDen; }
	int getSoNgayDaDi() const { return iSoNgay; }
	void setDiemDen(string diemden) { sDiemDen = diemden; }
	void setSoNgayDaDi(int songay) { iSoNgay = songay; }

	void Nhap();
	void Xuat() const;
};