// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cSachGiaoKhoa.h"
#include "cSachThamKhao.h"
#include <vector>

#pragma once
class cQuanLySach
{
private:
	vector<cSachGiaoKhoa> DS_GiaoKhoa;
	vector<cSachThamKhao> DS_ThamKhao;

public:
	void ThemSachGiaoKhoa();
	void ThemSachThamKhao();
	void NhapDSSGK(int);
	void NhapDSSTK(int);
	void XuatDS() const;
	int TinhTongThanhTien() const;
	int TinhTongThanhTienGiaoKhoa() const;
	int TinhTongThanhTienThamKhao() const;
	float TinhTBCongDonGiaSachThamKhao() const;
	void XuatSachGiaoKhoaCuaNXB(string) const;
};

