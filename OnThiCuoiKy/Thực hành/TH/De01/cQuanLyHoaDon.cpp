#include "cQuanLyHoaDon.h"

void cQuanLyHoaDon::themHoaDonHoGiaDinh()
{
	cHoaDonHoGiaDinh* hoaDon = new cHoaDonHoGiaDinh;
	hoaDon->Nhap();
	DSHoaDon.push_back(hoaDon);
}

void cQuanLyHoaDon::themHoaDonHoKinhDoanh()
{
	cHoaDonHoKinhDoanh* hoaDon = new cHoaDonHoKinhDoanh;
	hoaDon->Nhap();
	DSHoaDon.push_back(hoaDon);
}

void cQuanLyHoaDon::nhapDSHoaDon(int n)
{
	for (int i = 0; i < n; i++)
	{
		int loaiHoaDon;
		cout << "Nhap loai hoa don (1: Ho gia dinh, 2: Ho kinh doanh): ";
		cin >> loaiHoaDon;
		while (loaiHoaDon < 1 || loaiHoaDon > 2)
		{
			cout << "Du lieu khong hop le! Vui long nhap lai (1: Ho gia dinh, 2: Ho kinh doanh): ";
			cin >> loaiHoaDon;
		}
		if (loaiHoaDon == 1)
			themHoaDonHoGiaDinh();
		else
			themHoaDonHoKinhDoanh();
	}
}

void cQuanLyHoaDon::xuatDSHoaDon() const
{
	if (DSHoaDon.empty())
	{
		cout << "Danh sach hoa don rong!" << endl;
		return;
	}
	for (int i = 0; i < DSHoaDon.size(); i++)
	{
		cout << i + 1 << ". ";
		DSHoaDon[i]->Xuat();
		cout << endl;
	}
}

int cQuanLyHoaDon::TinhTongSoTienNuoc() const
{
	int tongTien = 0;
	for (const auto& hoaDon : DSHoaDon)
	{
		tongTien += hoaDon->TinhTienThanhToan();
	}
	return tongTien;
}

void cQuanLyHoaDon::xuatHoKinhDoanhDungNhieuNuocNhat() const
{
	if (DSHoaDon.empty())
	{
		cout << "Danh sach hoa don rong!";
		return;
	}
	vector<cHoaDonHoKinhDoanh*> hoaDonMax;
	int soNuocMax = 0;
	for (int i = 0; i < DSHoaDon.size(); i++)
	{
		if (DSHoaDon[i]->loai == cHoaDon::HO_KINH_DOANH)
		{
			if (DSHoaDon[i]->TinhSoNuocSuDung() > soNuocMax)
			{
				soNuocMax = DSHoaDon[i]->TinhSoNuocSuDung();
				hoaDonMax.clear();
				hoaDonMax.push_back((cHoaDonHoKinhDoanh*)(DSHoaDon[i]));
			}
			else if (DSHoaDon[i]->TinhSoNuocSuDung() == soNuocMax)
			{
				hoaDonMax.push_back((cHoaDonHoKinhDoanh*)(DSHoaDon[i]));
			}
		}
	}
	if (hoaDonMax.empty())
	{
		cout << "Khong tim thay hoa don ho kinh doanh!" << endl;
		return;
	}
	for (int i = 0; i < hoaDonMax.size(); i++)
	{
		cout << i + 1 << ". ";
		hoaDonMax[i]->Xuat();
		cout << endl;
	}
	cout << "So nuoc lon nhat da su dung: " << hoaDonMax[0]->TinhSoNuocSuDung() << endl;
}
