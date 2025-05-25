// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cGDDat.h"
#include "cGDNhaPho.h"
#include "cGDCanHoChungCu.h"
#include <vector>

#pragma once
class cQuanLyGiaoDichBDS
{
private:
	vector<cGDDat> DS_GiaoDichDat;
	vector<cGDNhaPho> DS_GiaoDichNhaPho;
	vector<cGDCanHoChungCu> DS_GiaoDichCanHo;

public:
	void NhapDSGDDat(int);
	void NhapDSGDNhaPho(int);
	void NhapDSGDCanHo(int);

	int TongSoLuongGiaoDichDat() const;
	int TongSoLuongGiaoDichNhaPho() const;
	int TongSoLuongGiaoDichCanHo() const;

	float TrungBinhThanhTienGDCanHo() const;
	void GDNhaPhoCoGiaTriCaoNhat() const;
	void XuatCacGDVaoThang(int = 1, int = 1) const;
};

