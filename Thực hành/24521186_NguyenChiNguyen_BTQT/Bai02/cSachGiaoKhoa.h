//Mã số sinh viên: 24521186
//Họ và tên: Nguyễn Chí Nguyên
//Ngày sinh: 10/03/2006
//Lớp: IT002.P26.2

#include <string>
#include <iostream>
using namespace std;

#pragma once
class cSachGiaoKhoa
{
private:
	string sMa, sTen, sNXB;
	int iSoLuong;
	int iDonGia;
	bool bTinhTrang;

public:
	cSachGiaoKhoa(string = "null", string = "null", string = "null", int = 0, int = 0, bool = 0);

	string getMa() const;
	string getTen() const;
	string getNXB() const;
	int getSoLuong() const;
	int getDonGia() const;
	bool getTinhTrang() const;
	void setMa(string);
	void setTen(string);
	void setNXB(string);
	void setSoLuong(int);
	void setDonGia(int);
	void setTinhTrang(bool);

	void Nhap();
	void Xuat() const;
	int TinhThanhTien() const;

};

