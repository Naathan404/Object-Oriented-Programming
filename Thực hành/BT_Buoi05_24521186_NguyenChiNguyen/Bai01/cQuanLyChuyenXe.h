// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cChuyenXeNoiThanh.h"
#include "cChuyenXeNgoaiThanh.h"
#include <vector>

#pragma once
class cQuanLyChuyenXe
{
private:
	vector<cChuyenXeNoiThanh> DSXeNoiThanh;
	vector<cChuyenXeNgoaiThanh> DSXeNgoaiThanh;

public:
	void ThemChuyenXeNoiThanh();
	void ThemChuyenXeNgoaiThanh();
	void NhapDSNoiThanh(int);
	void NhapDSNgoaiThanh(int);
	void XuatDS() const;
	int TinhTongDoanhThu() const;
	int TinhTongDoanhThuNoiThanh() const;
	int TinhTongDoanhThuNgoaiThanh() const;

};

