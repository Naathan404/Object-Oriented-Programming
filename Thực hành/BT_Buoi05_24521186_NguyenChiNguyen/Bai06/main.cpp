// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLySinhVien.h"

int main()
{
	cQuanLySinhVien list;
	int n, m;
	// Nhap
	cout << "Nhap so luong SV Cao Dang: ";
	cin >> n;
	list.NhapDSSVCaoDang(n);
	cout << "Nhap so luong SV Dai Hoc: ";
	cin >> m;
	list.NhapDSSVDaiHoc(m);

	// Xuat
	cout << "\nDanh sach SV Cao Dang: " << endl;
	list.XuatDSSVCaoDang();
	cout << "Danh sach SV Dai Hoc: " << endl;
	list.XuatDSSVDaiHoc();

	cout << "\nDanh sach SV du dieu kien tot nghiep: " << endl;
	list.XuatDSSVDuDieuKienTotNghiep();
	cout << "\nDanh sach SV khong du dieu kien tot nghiep: " << endl;
	list.XuatDSSVKhongDuDieuKienTotNghiep();

	cout << "\nSinh vien Dai Hoc co diem TB cao nhat: " << endl;
	list.XuatSVDaiHocCoDiemTBCaoNhat();


	return 0;
}