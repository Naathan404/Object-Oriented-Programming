// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "string"
#include "iostream"
#include <fstream>
using namespace std;

#pragma once
class KhachHang
{
protected:
	string tenKH;
	int soLuongHang, donGia;
	const float VAT = 0.1;

public:
	KhachHang() : tenKH(""), soLuongHang(0), donGia(0) { loai = A; }

	enum LOAI { A, B, C };
	LOAI loai;
	virtual void Nhap(ifstream&); 
	virtual void Xuat(ofstream&) const;
	virtual int TinhTien() const = 0;
};

/// Khach hang LOAI A
class KHLoaiA : public KhachHang
{
public:
	int TinhTien() const override
	{
		return soLuongHang * donGia * (1 + VAT);
	}
};

// Khach hang LOAI B
class KHLoaiB : public KhachHang
{
private:
	int soNamThanThiet;

public:
	KHLoaiB() : soNamThanThiet(0) { loai = B; }

	void Nhap(ifstream &in)
	{
		KhachHang::Nhap(in);
		//cout << "Nhap so nam than thiet: ";
		in >> soNamThanThiet;
	}

	int TinhTien() const override
	{
		float khuyenMai = max(0.05 * soNamThanThiet, 0.5);
		return (soLuongHang * donGia) * (1 - khuyenMai) + (VAT * soLuongHang * donGia);
	}
};

// Khach hang LOAI C
class KHLoaiC : public KhachHang
{
public:
	KHLoaiC() { loai = C; }

	int TinhTien() const override
	{
		return soLuongHang * donGia * 0.5 + (VAT * soLuongHang * donGia);
	}
};