// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "SVCaoDang.h"

SVCaoDang::SVCaoDang(int ms, string ten, string dc, unsigned char sotc, float dtb, float dtn) : SinhVien(ms, ten, dc, sotc)
{
	diemTN = dtn;
	loai = CAO_DANG;
}

void SVCaoDang::Nhap()
{
	SinhVien::Nhap();
	cout << "Nhap diem tot nghiep: ";
	cin >> diemTN;
}

void SVCaoDang::Xuat() const
{
	SinhVien::Xuat();
	cout << " | " << diemTN;
}

bool SVCaoDang::XetTotNghiep() const
{
	return (tongTC >= 120 && diemTB >= 5 && diemTN >= 5);
}
