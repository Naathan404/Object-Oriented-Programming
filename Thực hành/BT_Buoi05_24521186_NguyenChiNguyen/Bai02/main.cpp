// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLySach.h"

int main()
{
	cQuanLySach list;
	int n, m;
	cout << "Nhap so luong sach giao khoa: ";
	cin >> n;
	list.NhapDSSGK(n);
	cout << "Nhap so luong sach tham khao: ";
	cin >> m;
	list.NhapDSSTK(m);
	cout << "Tong thanh toen cua sach giao khoa: " << list.TinhTongThanhTienGiaoKhoa() << endl;
	cout << "Tong thanh tien cua sach tham khao: " << list.TinhTongThanhTienThamKhao() << endl;
	cout << "Trung binh cong don gia cua sach tham khao la: " << list.TinhTBCongDonGiaSachThamKhao() << endl;
	string nxb;
	cout << "Nhap ten NXB can tim: ";
	cin.ignore();
	getline(cin, nxb);
	list.XuatSachGiaoKhoaCuaNXB(nxb);

	return 0;
}