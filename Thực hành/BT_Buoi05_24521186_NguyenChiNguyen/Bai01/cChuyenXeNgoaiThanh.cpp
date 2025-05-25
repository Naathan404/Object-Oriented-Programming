// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cChuyenXeNgoaiThanh.h"

cChuyenXeNgoaiThanh::cChuyenXeNgoaiThanh(int ms, string hoten, int so, int dt, string diemden, int songay) : cChuyenXe(ms, hoten, so, dt)
{
	sDiemDen = diemden;
	iSoNgay = songay;
}

void cChuyenXeNgoaiThanh::Nhap()
{
	cChuyenXe::Nhap();
	cout << "Nhap diem den: ";
	cin.ignore();
	getline(cin, sDiemDen);
	cout << "Nhap so ngay da di: ";
	cin >> iSoNgay;
}

void cChuyenXeNgoaiThanh::Xuat() const
{
	cChuyenXe::Xuat();
	cout << " | Diem den: " << sDiemDen;
	cout << " | So so ngay da di: " << iSoNgay;
	cout << endl;
}