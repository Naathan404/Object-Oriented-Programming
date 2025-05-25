// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLyGiaoDichBDS.h"
#include "iomanip"

int main()
{
	cQuanLyGiaoDichBDS list;
	int n, m, k;
	cout << "Nhap so giao dich dat: ";
	cin >> n;
	list.NhapDSGDDat(n);
	cout << "Nhap so giao dich nha pho: ";
	cin >> m;
	list.NhapDSGDNhaPho(m);
	cout << "Nhap so giao dich can ho chung cu: ";
	cin >> k;
	list.NhapDSGDCanHo(k);
	cout << "Tong so luong giao dich dat: " << list.TongSoLuongGiaoDichDat() << endl;
	cout << "Tong so luong giao dich nha pho: " << list.TongSoLuongGiaoDichNhaPho() << endl;
	cout << "Tong so luong giao dich can ho chung cu: " << list.TongSoLuongGiaoDichCanHo() << endl;
	cout << "Trung binh thanh tien giao dich can ho chung cu: " << fixed << setprecision(3) << list.TrungBinhThanhTienGDCanHo() << endl;
	cout.unsetf(ios::fixed);
	cout << "Giao dich nha pho co gia tri cao nhat: \n";
	list.GDNhaPhoCoGiaTriCaoNhat();
	cout << "Cac giao dich vao thang 12 nam 2024: \n";
	list.XuatCacGDVaoThang(12, 2024);

	return 0;
}