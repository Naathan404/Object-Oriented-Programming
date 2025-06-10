// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "KhachHang.h"

void KhachHang::Nhap(ifstream& in)
{
	//cout << "Nhap ten khach hang: ";
	in.ignore();
	getline(in, tenKH);
	//cout << "Nhap so luong hang: ";
	in >> soLuongHang;
	//cout << "Nhap don gia: ";
	in >> donGia;
}

void KhachHang::Xuat(ofstream& out) const
{
	out << tenKH << endl;
	out << TinhTien();
}
