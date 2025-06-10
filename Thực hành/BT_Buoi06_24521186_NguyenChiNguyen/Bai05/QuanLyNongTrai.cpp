// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "QuanLyNongTrai.h"

void QuanLyNongTrai::NhapSoLuongGiaSuc()
{
	int b, c, d;
	cout << "Nhap so luong bo: "; cin >> b;
	cout << "Nhap so luong cuu: "; cin >> c;
	cout << "Nhap so luong de: "; cin >> d;
	for (int i = 0; i < b; i++)
		ds.push_back(new Bo);
	for (int i = 0; i < c; i++)
		ds.push_back(new Cuu);
	for (int i = 0; i < d; i++)
		ds.push_back(new De);
}

void QuanLyNongTrai::ThongKeSoLuongGiaSucMoiLoai() const
{
	int soBo = 0, soCuu = 0, soDe = 0;
	for (int i = 0; i < ds.size(); i++)
	{
		if (ds[i]->loai == GiaSuc::BO) soBo++;
		else if (ds[i]->loai == GiaSuc::CUU) soCuu++;
		else if (ds[i]->loai == GiaSuc::DE) soDe++;
	}
	cout << "So bo: " << soBo << endl;
	cout << "So cuu: " << soCuu << endl;
	cout << "So de: " << soDe;
}

float QuanLyNongTrai::TongSoSuaThuDuoc() const
{
	return tongSoSua;
}

void QuanLyNongTrai::PhatRaCacTiengKeu() const
{
	for (int i = 0; i < ds.size(); i++)
	{
		ds[i]->Keu();
		cout << " ";
	}
}

void QuanLyNongTrai::QuaMotLuaSinh()
{
	int soBo = 0, soCuu = 0, soDe = 0;
	for (int i = 0; i < ds.size(); i++)
	{
		if (ds[i]->loai == GiaSuc::BO) soBo += ds[i]->SinhCon();
		else if (ds[i]->loai == GiaSuc::CUU) soCuu += ds[i]->SinhCon();
		else if (ds[i]->loai == GiaSuc::DE) soDe += ds[i]->SinhCon();
	}
	for (int i = 0; i < soBo; i++)
		ds.push_back(new Bo);
	for (int i = 0; i < soCuu; i++)
		ds.push_back(new Cuu);
	for (int i = 0; i < soDe; i++)
		ds.push_back(new De);
}

void QuanLyNongTrai::QuaMotLuocChoSua()
{
	for (int i = 0; i < ds.size(); i++)
	{
		tongSoSua += ds[i]->ChoSua();
	}
}
