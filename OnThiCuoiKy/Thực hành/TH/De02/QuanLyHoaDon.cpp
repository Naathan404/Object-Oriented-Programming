#include "QuanLyHoaDon.h"

void QuanLyHoaDon::ThemHoaDonDoanhNghiep()
{
	HoaDonDoanhNghiep* hoaDon = new HoaDonDoanhNghiep;
	hoaDon->Nhap();
	list.push_back(hoaDon);
}
void QuanLyHoaDon::ThemHoaDonHoGD()
{
	HoaDonHoGiaDinh* hoaDon = new HoaDonHoGiaDinh;
	hoaDon->Nhap();
	list.push_back(hoaDon);
}


void QuanLyHoaDon::Nhap(int n)
{
	int loai;
	for (int i = 0; i < n; i++)
	{
		cout << "Loai hoa don la gi? (1: Doanh nghiep, 2: Ho gia dinh): ";
		cin >> loai;
		while (loai < 1 || loai > 2)
		{
			cout << "Khong hop le! Vui long nhap lai: ";
			cin >> loai;
		}
		if (loai == 1)
			ThemHoaDonDoanhNghiep();
		else
			ThemHoaDonHoGD();
	}
}

void QuanLyHoaDon::Xuat() const
{
	if (list.empty())
	{
		cout << "Danh sach hoa don rong!";
		return;
	}
	for (int i = 0; i < list.size(); i++)
	{
		cout << i + 1 << ". ";
		list[i]->Xuat();
		cout << endl;
	}
}

int QuanLyHoaDon::TinhTongSoTienThanhToan() const
{
	int tongTien = 0;
	for (int i = 0; i < list.size(); i++)
	{
		tongTien += list[i]->getSoTienThanhToan();
	}
	return tongTien;
}

void QuanLyHoaDon::XuatHoGiaDinhDungDienNhieuNhat() const
{
	vector<HoaDonHoGiaDinh*> kq;
	int soDien = 0;
	for (int i = 0; i < list.size(); i++)
	{
		if (list[i]->TinhSoDienTieuThu() > soDien)
		{
			soDien = list[i]->TinhSoDienTieuThu();
			kq.clear();
			kq.push_back((HoaDonHoGiaDinh*)list[i]);
		}
		else if (list[i]->TinhSoDienTieuThu() == soDien)
		{
			kq.push_back((HoaDonHoGiaDinh*)list[i]);
		}
	}
	if (kq.empty())
	{
		cout << "Khong tim thay du lieu ve hao don ho gia dinh!";
		return;
	}
	for (int i = 0; i < kq.size(); i++)
	{
		cout << i + 1 << ". ";
		kq[i]->Xuat();
		cout << endl;
	}
	cout << "So dien tieu thu nhieu nhat: " << kq[0]->TinhSoDienTieuThu();
}