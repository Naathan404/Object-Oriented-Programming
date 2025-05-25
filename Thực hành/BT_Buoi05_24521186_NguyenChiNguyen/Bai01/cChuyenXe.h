// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
#include <string>
using namespace std;

#pragma once
class cChuyenXe
{
protected: 
	int iMaSoChuyen;
	string sHoTenTaiXe;
	int iSoXe;
	int iDoanhThu;

public:
	cChuyenXe(int = 0, string = "null", int = 0, int = 0);

	int getMSChuyen() const { return iMaSoChuyen; }
	string getHoTenTaiXe() const { return sHoTenTaiXe; }
	int getSoXe() const { return iSoXe; }
	int getDoanhThu() const { return iDoanhThu; }
	void setMSChuyen(int ms) { iMaSoChuyen = ms; }
	void setHoTenTaiXe(string hoten) { sHoTenTaiXe = hoten; }
	void setSoXe(int soxe) { iSoXe = soxe > 0 ? soxe : 0; }
	void setDoanhThu(int doanhthu) { iDoanhThu = doanhthu > 0 ? doanhthu : 0; }

	void Nhap();
	void Xuat() const;

};
