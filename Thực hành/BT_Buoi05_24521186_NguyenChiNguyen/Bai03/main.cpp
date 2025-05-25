// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLyGiaoDich.h"

int main()
{
	cQuanLyGiaoDich list;
	int n, m;
	cout << "Nhap so luong giao dich vang: ";
	cin >> n;
	list.NhapDSGDVang(n);
	cout << "Nhap so luong giao dich ngoai te: ";
	cin >> m;
	list.NhapDSGDTienTe(m);
	cout << "Giao dich vang co thanh tien cao nhat: \n";
	list.XuatGDVangCoThanhTienCaoNhat();
	cout << "Giao dich ngoai te Euro co thanh tien thap nhat: \n";
	list.XuatGDTienTeCoThanhTienThapNhat("Euro");
	cout << "Cac giao dich co thanh tien tren 1 ty: \n";
	list.XuatGDCoThanhTienTren1Ty();

	return 0;
}