// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "QuanLySinhVien.h"


int main()
{
	QuanLySinhVien qlsv;
	int n;
	cout << "Nhap so luong sinh vien can quan ly: ";
	cin >> n;
	qlsv.NhapDS(n);
	cout << "Danh sach sinh vien:\n";
	qlsv.XuatDS();
	cout << "\nDanh sach sinh vien du dieu kien tot nghiep:\n";
	qlsv.XuatDSSVDuDieuKienTotNghiep();
	cout << "\nDanh sach sinh vien khong du dieu kien tot nghiep:\n";
	qlsv.XuatDSSVKhongDuDieuKienTotNghiep();
	cout << "\nSinh vien dai hoc co diem trung binh cao nhat: \n";
	qlsv.XuatSVDaiHocCoDTBCaoNhat();
	cout << "\nSinh vien cao dang co diem trung binh cao nhat: \n";
	qlsv.XuatSVCaoDangCoDTBCaoNhat();
	cout << "\nSo luong sinh vien dai hoc khong du dieu kien tot nghiep: " << qlsv.XuatSoSVDaiHocKhongDuDieuKienTotNghiep() << endl;
	cout << "So luong sinh vien cao dang khong du dieu kien tot nghiep: " << qlsv.XuatSoSVCaoDangKhongDuDieuKienTotNghiep() << endl;

	return 0;
}