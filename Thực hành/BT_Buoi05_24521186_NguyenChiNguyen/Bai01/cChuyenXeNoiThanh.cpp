// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cChuyenXeNoiThanh.h"

cChuyenXeNoiThanh::cChuyenXeNoiThanh(int ms, string hoten, int so, int dt, int sotuyen, float sokm) : cChuyenXe(ms, hoten, so, dt)
{
	iSoTuyen = sotuyen;
	fSoKM = sokm;
}

void cChuyenXeNoiThanh::Nhap()
{
	cChuyenXe::Nhap();
	cout << "Nhap so tuyen: ";
	cin >> iSoTuyen;
	cout << "Nhap so km da di: ";
	cin >> fSoKM;
}

void cChuyenXeNoiThanh::Xuat() const
{
	cChuyenXe::Xuat();
	cout << " | So tuyen: " << iSoTuyen;
	cout << " | So KM di duoc: " << fSoKM;
	cout << endl;
}