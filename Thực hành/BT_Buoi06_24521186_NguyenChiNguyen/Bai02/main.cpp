// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "QuanLyGiaoDich.h"


int main()
{
	QuanLyGiaoDich list;
	cout << "Nhap so giao dich can luu tru: ";
	int n;
	cin >> n;
	list.Nhap(n);
	cout << "\nTong so gia dich dat: " << list.TinhTongSoGDDat();
	cout << "\nTong so gia dich nha pho: " << list.TinhTongSoGDNhaPho();
	cout << "\nTong so gia dich can ho chung cu: " << list.TinhTongSoGDCanHoChungCu() << endl;
	cout << "\nTrung binh thanh tien cua giao dich can ho chung cu: " << list.TinhTBThanhTienGDCanHoChungCu();
	cout << "\nGiao dich nha pho co gia tri cao nhat: \n";
	list.XuatGDNhaPhoCoThanhTienLonNhat();
	cout << "\nDanh sach cac giao dich cua thang 12 nam 2024: \n";
	list.XuatDSGDVaoThang(12, 2024);

	return 0;

}