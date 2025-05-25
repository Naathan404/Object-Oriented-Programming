// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLyChuyenXe.h"

int main()
{
	cQuanLyChuyenXe list;
	int n, m;
	cout << "Nhap so chuyen xe noi thanh: ";
	cin >> n;
	list.NhapDSNoiThanh(n);
	cout << "Nhap so chuyen xe ngoai thanh: ";
	cin >> m;
	list.NhapDSNgoaiThanh(m);
	cout << "Tong doanh thu cua tat ca cac chuyen xe la: " << list.TinhTongDoanhThu();
	cout << "\nTong doanh thu cua cac chuyen xe noi thanh la: " << list.TinhTongDoanhThuNoiThanh();
	cout << "\nTong doanh thu cua cac chuyen xe ngoai thanh la: " << list.TinhTongDoanhThuNgoaiThanh();

	return 0;
}