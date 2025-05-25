//Mã số sinh viên: 24521186
//Họ và tên: Nguyễn Chí Nguyên
//Ngày sinh: 10/03/2006
//Lớp: IT002.P26.2

#include "cListSach.h"

int main()
{
	cListSach list;
	
	// Minh hoa ham nhap, xuat
	list.Nhap();
	list.Xuat();

	// Minh hoa ham tinh thanh tien ma thu vien phai tra cho tung loai sach
	cout << "\nThanh tien ma thu vien phai sach giao khoa: " << list.TinhTongThanhTienSGK();
	cout << "\nThanh tien ma thu vien phai sach tham khao: " << list.TinhTongThanhTienSTK();

	// Minh hoa ham hien thi thong tin cac sach co thanh tien phai tra thap nhat
	cout << "\nThong tin cac sach giao khoa co thanh tien phai tra thap nhat: ";
	list.XuatSGKCoThanhTienThapNhat();
	cout << "\nThong tin cac sach tham khao co thanh tien phai tra thap nhat: ";
	list.XuatSTKCoThanhTienThapNhat();

	// Minh hoa ham tim thong tin sach giao khoa theo ten nha xuat ban do nguoi dung nhap vao
	string nxb;
	cout << "\nNhap ten Nha xuat ban: ";
	cin.ignore();
	getline(cin, nxb);
	cout << "Danh sach thong tin cac sach cua NXB ban vua nhap la: ";
	list.TimSGKTheoNXB(nxb);

	return 0;
}