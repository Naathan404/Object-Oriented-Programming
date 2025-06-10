// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <string>
#include <iostream>
using namespace std;

#pragma once
class NhanVien
{
protected:
	string maNV, hoTen, email;
	int tuoi, soDienThoai, luongCB, luong;

public:
	enum LOAI
	{
		CODER,
		TESTER
	};

	LOAI loai;

	NhanVien(string = "", string = "", string = "", int = 0, int = 0, int = 0);

	string getMaNV() const { return maNV; }
	string getHoTen() const { return hoTen; }
	string getEmail() const { return email; }
	int getTuoi() const { return tuoi; }
	int getSoDienThoai() const { return soDienThoai; }
	int getLuongCB() const { return luongCB; }
	void setMaNV(string ma) { maNV = ma; }
	void setHoTen(string ten) { hoTen = ten; }
	void setEmail(string em) { email = em; }
	void setTuoi(int t) { tuoi = t; }
	void setSoDienThoai(int sdt) { soDienThoai = sdt; }
	void setLuongCB(int luong) { luongCB = luong; }
	int getLuong() const { return luong; }

	virtual void Nhap();
	virtual void Xuat() const;
	virtual int TinhLuong() const = 0;
};

