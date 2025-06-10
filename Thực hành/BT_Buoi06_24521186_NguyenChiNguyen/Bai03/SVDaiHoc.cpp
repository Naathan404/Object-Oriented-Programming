// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "SVDaiHoc.h"

SVDaiHoc::SVDaiHoc(int ma, string ten, string dc, int sotc, float dtb, string tenlv, float dlv) : SinhVien(ma, ten, dc, sotc, dtb)
{
	tenLV = tenlv;
	diemLV = dlv;
	loai = DAI_HOC;
}

void SVDaiHoc::Nhap()
{
	SinhVien::Nhap();
	cout << "Nhap ten luan van: ";
	cin.ignore();
	getline(cin, tenLV);
	cout << "Nhap diem luan van: ";
	cin >> diemLV;
}

void SVDaiHoc::Xuat() const
{
	SinhVien::Xuat();
	cout << " | Ten luan van: " << tenLV << " | Diem luan van: " << diemLV;
}

bool SVDaiHoc::XetTotNghiep() const
{
	return (tongTC >= 170 && diemTB >= 5 && diemLV >= 5);
}
