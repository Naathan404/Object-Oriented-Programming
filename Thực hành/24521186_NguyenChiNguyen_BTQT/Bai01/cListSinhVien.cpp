//Mã số sinh viên: 24521186
//Họ và tên: Nguyễn Chí Nguyên
//Ngày sinh: 10/03/2006
//Lớp: IT002.P26.2

#include "cListSinhVien.h"

cListSinhVien::cListSinhVien(int slSVCD, int slSVDH)
{
	ListSVCaoDang.resize(slSVCD);
	ListSVDaihoc.resize(slSVDH);
}

void cListSinhVien::Nhap()
{
	int slSVCD, slSVDH;
	cout << "Nhap so luong sinh vien cao dang: ";
	cin >> slSVCD;
	ListSVCaoDang.resize(slSVCD);
	for (int i = 0; i < slSVCD; i++)
	{
		cout << "Nhap thong tin sinh vien thu " << i + 1 << ": " << endl;
		ListSVCaoDang[i].Nhap();
	}

	cout << "Nhap so luong sinh vien dai hoc: ";
	cin >> slSVDH;
	ListSVDaihoc.resize(slSVDH);
	for (int i = 0; i < slSVDH; i++)
	{
		cout << "Nhap thong tin sinh vien thu " << i + 1 << ": " << endl;
		ListSVDaihoc[i].Nhap();
	}
}

void cListSinhVien::Xuat() const
{
	cout << "Danh sach sinh vien he cao dang: ";
	for (int i = 0; i < ListSVCaoDang.size(); i++)
	{
		cout << endl << i + 1 << ". ";
		ListSVCaoDang[i].Xuat();
	}
	cout << "\nDanh sach sinh vien he dai hoc: ";
	for (int i = 0; i < ListSVDaihoc.size(); i++)
	{
		cout << endl << i + 1 << ". ";
		ListSVDaihoc[i].Xuat();
	}
}

int cListSinhVien::DemSoSVDuDieuKienTotNghiep() const
{
	int count = 0;
	for (int i = 0; i < ListSVCaoDang.size(); i++)
		if (ListSVCaoDang[i].DuDieuKienTotNghiep())
			count++;
	for (int i = 0; i < ListSVDaihoc.size(); i++)
		if (ListSVDaihoc[i].DuDieuKienTotNghiep())
			count++;
	return count;
}

cSVDaiHoc cListSinhVien::TimSVDaiHocDTBCaoNhat() const
{
	if (ListSVDaihoc.size() == 0)
	{
		cout << "\nKhong ton tai du lieu ve sinh vien dai hoc!";
		return NULL;
	}

	cSVDaiHoc res = ListSVDaihoc[0];
	for (int i = 1; i < ListSVDaihoc.size(); i++)
		if (ListSVDaihoc[i].getDiemTB() > res.getDiemTB())
			res = ListSVDaihoc[i];

	return res;
}
