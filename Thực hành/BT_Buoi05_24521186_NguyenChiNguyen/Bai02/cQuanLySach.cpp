// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLySach.h"

void cQuanLySach::ThemSachGiaoKhoa()
{
	cSachGiaoKhoa temp;
	temp.Nhap();
	DS_GiaoKhoa.push_back(temp);
}

void cQuanLySach::ThemSachThamKhao()
{
	cSachThamKhao temp;
	temp.Nhap();
	DS_ThamKhao.push_back(temp);
}

void cQuanLySach::NhapDSSGK(int n)
{
	DS_GiaoKhoa.resize(n);	
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap sach giao khoa thu " << i + 1 << ": " << endl;
		DS_GiaoKhoa[i].Nhap();
	}
}

void cQuanLySach::NhapDSSTK(int n)
{
	DS_ThamKhao.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap sach tham khao thu " << i + 1 << ": " << endl;
		DS_ThamKhao[i].Nhap();
	}
}

void cQuanLySach::XuatDS() const
{
	cout << "Danh sach sach giao khoa: " << endl;
	for (int i = 0; i < DS_GiaoKhoa.size(); i++)
	{
		cout << i + 1 << ". ";
		DS_GiaoKhoa[i].Xuat();
	}
	cout << "Danh sach sach tham khao: " << endl;
	for (int i = 0; i < DS_ThamKhao.size(); i++)
	{
		cout << i + 1 << ". ";
		DS_ThamKhao[i].Xuat();
	}
}

int cQuanLySach::TinhTongThanhTien() const
{
	return TinhTongThanhTienGiaoKhoa() + TinhTongThanhTienThamKhao();
}

int cQuanLySach::TinhTongThanhTienGiaoKhoa() const
{
	int iTong = 0;
	for (auto x : DS_GiaoKhoa)
		iTong += x.TinhThanhTien();
	return iTong;
}

int cQuanLySach::TinhTongThanhTienThamKhao() const
{
	int iTong = 0;
	for (auto x : DS_ThamKhao)
		iTong += x.TinhThanhTien();
	return iTong;
}

float cQuanLySach::TinhTBCongDonGiaSachThamKhao() const
{
	if (DS_ThamKhao.size() == 0)
		return 0;	
	float iTong = 0;
	for (auto x : DS_ThamKhao)
		iTong += x.getDonGia();
	return iTong / DS_ThamKhao.size();
}

void cQuanLySach::XuatSachGiaoKhoaCuaNXB(string nxb) const
{
	int k = 1;
	cout << "Danh sach sach giao khoa cua NXB " << nxb << ": " << endl;
	for (int i = 0; i < DS_GiaoKhoa.size(); i++)
	{
		if (DS_GiaoKhoa[i].getNXB() == nxb)
		{
			cout << k << ". ";
			k++;
			DS_GiaoKhoa[i].Xuat();
		}
	}
}


