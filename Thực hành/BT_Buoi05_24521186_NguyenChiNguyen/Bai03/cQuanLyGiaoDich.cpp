// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLyGiaoDich.h"

void cQuanLyGiaoDich::NhapDSGDVang(int n)
{
	DSGDVang.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap giao dich vang thu " << i + 1 << ": \n";
		DSGDVang[i].Nhap();
	}
}

void cQuanLyGiaoDich::NhapDSGDTienTe(int n)
{
	DSGDTienTe.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap giao dich tien te thu " << i + 1 << ": \n";
		DSGDTienTe[i].Nhap();
	}
}

void cQuanLyGiaoDich::XuatDSGDVang() const
{
	cout << "Danh sach giao dich vang: \n";
	for (int i = 0; i < DSGDVang.size(); i++)
	{
		cout << i + 1 << ". ";
		DSGDVang[i].Xuat();
	}
}

void cQuanLyGiaoDich::XuatDSGDTienTe() const
{
	cout << "Danh sach giao dich tien te: \n";
	for (int i = 0; i < DSGDTienTe.size(); i++)
	{
		cout << i + 1 << ". ";
		DSGDTienTe[i].Xuat();
	}
}

void cQuanLyGiaoDich::XuatGDVangCoThanhTienCaoNhat() const
{
	vector<cGiaoDichVang> KQ;
	long long max = 0;
	// Tim thanh tien max
	for (int i = 0; i < DSGDVang.size(); i++)
	{
		if (DSGDVang[i].TinhThanhTien() > max)
			max = DSGDVang[i].TinhThanhTien();
	}
	// Tim cac giao dich co thanh tien bang max
	for (int i = 0; i < DSGDVang.size(); i++)
	{
		if (DSGDVang[i].TinhThanhTien() == max)
			KQ.push_back(DSGDVang[i]);
	}
	// Xuat cac giao dich vang co thanh tien max
	for (int i = 0; i < KQ.size(); i++)
	{
		cout << i + 1 << ". ";
		KQ[i].Xuat();
	}
}

void cQuanLyGiaoDich::XuatGDTienTeCoThanhTienThapNhat(string loaiTienTe) const
{
	vector<cGiaoDichTienTe> KQ;
	if (loaiTienTe == "all")
	{
		long long min = DSGDTienTe[0].TinhThanhTien();
		for (int i = 1; i < DSGDTienTe.size(); i++)
		{
			if (DSGDTienTe[i].TinhThanhTien() < min)
			{
				min = DSGDTienTe[i].TinhThanhTien();
			}
		}
		for (int i = 0; i < DSGDTienTe.size(); i++)
		{
			if (DSGDTienTe[i].TinhThanhTien() == min)
				KQ.push_back(DSGDTienTe[i]);
		}
	}
	else
	{
		long long min = LONG_MAX;
		for (int i = 0; i < DSGDTienTe.size(); i++)
		{
			if (DSGDTienTe[i].getLoaiTien() == loaiTienTe && DSGDTienTe[i].TinhThanhTien() < min)
			{
				min = DSGDTienTe[i].TinhThanhTien();
			}
		}
		for (int i = 0; i < DSGDTienTe.size(); i++)
		{
			if (DSGDTienTe[i].getLoaiTien() == loaiTienTe && DSGDTienTe[i].TinhThanhTien() == min)
			{
				KQ.push_back(DSGDTienTe[i]);
			}
		}
	}

	for (int i = 0; i < KQ.size(); i++)
	{
		cout << i + 1 << ". ";
		KQ[i].Xuat();
	}
}

void cQuanLyGiaoDich::XuatGDCoThanhTienTren1Ty() const
{
	vector<cGiaoDichVang> KQVang;
	vector<cGiaoDichTienTe> KQTienTe;

	int MotTy = 1000000000;

	for (int i = 0; i < DSGDVang.size(); i++)
	{
		if (DSGDVang[i].TinhThanhTien() > MotTy)
			KQVang.push_back(DSGDVang[i]);
	}
	for (int i = 0; i < DSGDTienTe.size(); i++)
	{
		if (DSGDTienTe[i].TinhThanhTien() > MotTy)
			KQTienTe.push_back(DSGDTienTe[i]);
	}

	// Xuat
	cout << "Giao dich vang: \n";
	for (int i = 0; i < KQVang.size(); i++)
	{
		cout << i + 1 << ". ";
		KQVang[i].Xuat();
	}
	cout << "Giao dich tien te: \n";
	for (int i = 0; i < KQTienTe.size(); i++)
	{
		cout << i + 1 << ". ";
		KQTienTe[i].Xuat();
	}
}

