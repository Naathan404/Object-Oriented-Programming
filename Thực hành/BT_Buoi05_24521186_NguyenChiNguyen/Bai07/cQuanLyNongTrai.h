// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <vector>
#include "cBo.h"
#include "cCuu.h"
#include "cDe.h"

#pragma once
class cQuanLyNongTrai
{
private:
	vector<cBo> DS_Bo;
	vector<cCuu> DS_Cuu;
	vector<cDe> DS_De;
	float fTongSoSua;

public:
	void NhapSoLuongGiaSuc();
	void ThongKeSoLuongGiaSucMoiLoai() const;
	float TongSoSuaThuDuoc() const;
	void PhatRaCacTiengKeu() const;
	void QuaMotLuaSinh();
	void QuaMotLuocChoSua();

};

