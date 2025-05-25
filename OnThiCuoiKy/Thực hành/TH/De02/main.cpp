#include "QuanLyHoaDon.h"

int main()
{
	QuanLyHoaDon list;
	cout << "Nhap so luong hoa don can luu tru: ";
	int n; 
	cin >> n;
	list.Nhap(n);
	cout << "\nDanh sach thong tin cac hoa don: " << endl;
	list.Xuat();
	cout << "\nTong so tien thanh toan cua cac ho: " << list.TinhTongSoTienThanhToan() << endl;
	cout << "\nHo gia dinh su dung nhieu nhat: " << endl;
	list.XuatHoGiaDinhDungDienNhieuNhat();

	return 0;
}