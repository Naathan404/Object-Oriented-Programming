// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "Bo.h"
#include "Cuu.h"
#include "De.h"
#include <vector>

#pragma once
class QuanLyNongTrai
{
private:
	vector<GiaSuc*> ds;
	float tongSoSua;

public:
	void NhapSoLuongGiaSuc();
	void ThongKeSoLuongGiaSucMoiLoai() const;
	float TongSoSuaThuDuoc() const;
	void PhatRaCacTiengKeu() const;
	void QuaMotLuaSinh();
	void QuaMotLuocChoSua();

};

