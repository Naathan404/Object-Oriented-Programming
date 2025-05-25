//Mã số sinh viên: 24521186
//Họ và tên: Nguyễn Chí Nguyên
//Ngày sinh: 10/03/2006
//Lớp: IT002.P26.2

#include "cListSach.h"

cListSach::cListSach(int slSgk, int slStk)
{
	ListSGK.resize(slSgk);
	ListSTK.resize(slStk);
}

void cListSach::Nhap()
{
	int slSgk, slStk;
	cout << "Nhap vao so luong Sach giao khoa: ";
	cin >> slSgk;
	ListSGK.resize(slSgk);
	for (int i = 0; i < slSgk; i++)
	{
		cout << "Nhap thong tin SGK thu " << i + 1 << ": \n";
		ListSGK[i].Nhap();
	}
	cout << "Nhao so luong Sach tham khao: ";
	cin >> slStk;
	ListSTK.resize(slStk);
	for (int i = 0; i < slStk; i++)
	{
		cout << "Nhap thong tin STK thu " << i + 1 << ": \n";
		ListSTK[i].Nhap();
	}
}

void cListSach::Xuat() const
{
	cout << "\nDanh sach cac Sach giao khoa cua thu vien: ";
	for (int i = 0; i < ListSGK.size(); i++)
	{
		cout << endl << i + 1 << ". ";
		ListSGK[i].Xuat();
	}
	cout << "\nDanh sach cac Sach tham khao cua thu vien: ";
	for (int i = 0; i < ListSTK.size(); i++)
	{
		cout << endl << i + 1 << ". ";
		ListSTK[i].Xuat();
	}
}

int cListSach::TinhTongThanhTienSGK() const
{
	int iTongThanhTien = 0;
	for (int i = 0; i < ListSGK.size(); i++)
		iTongThanhTien += ListSGK[i].TinhThanhTien();
	return iTongThanhTien;
}

int cListSach::TinhTongThanhTienSTK() const
{
	int iTongThanhTien = 0;
	for (int i = 0; i < ListSTK.size(); i++)
		iTongThanhTien += ListSTK[i].TinhThanhTien();
	return iTongThanhTien;
}

int cListSach::TinhThanhTienSGKThapNhat() const
{
	int iThanhTienMin = INT32_MAX;
	for (int i = 0; i < ListSGK.size(); i++)
	{
		if (ListSGK[i].TinhThanhTien() < iThanhTienMin)
			iThanhTienMin = ListSGK[i].TinhThanhTien();
	}
	return iThanhTienMin;
}

int cListSach::TinhThanhTienSTKThapNhat() const
{
	int iThanhTienMin = INT32_MAX;
	for (int i = 0; i < ListSTK.size(); i++)
	{
		if (ListSTK[i].TinhThanhTien() < iThanhTienMin)
			iThanhTienMin = ListSTK[i].TinhThanhTien();
	}
	return iThanhTienMin;
}

void cListSach::XuatSGKCoThanhTienThapNhat() const
{
	int ThanhTienSGKMin = TinhThanhTienSGKThapNhat();
	if (ListSGK.size() == 0)
	{
		cout << "\nKhong co du lieu ve sach giao khoa!";
		return;
	}
	int k = 1;
	for (int i = 0; i < ListSGK.size(); i++)
	{
		if (ListSGK[i].TinhThanhTien() == ThanhTienSGKMin)
		{
			cout << endl << k++ << ". ";
			ListSGK[i].Xuat();
		}
	}
}
void cListSach::XuatSTKCoThanhTienThapNhat() const
{
	int ThanhTienSTKMin = TinhThanhTienSTKThapNhat();
	if (ListSTK.size() == 0)
	{
		cout << "\nKhong co du lieu ve sach tham khao!";
		return;
	}
	int j = 1;
	for (int i = 0; i < ListSTK.size(); i++)
	{
		if (ListSTK[i].TinhThanhTien() == ThanhTienSTKMin)
		{
			cout << endl << j++ << ". ";
			ListSTK[i].Xuat();
		}
	}
}


void cListSach::TimSGKTheoNXB(string nxb) const
{

	int k = 1;
	bool daTimThay = false;
	for (int i = 0; i < ListSGK.size(); i++)
	{
		if (ListSGK[i].getNXB() == nxb)
		{
			daTimThay = true;
			cout << endl << k++ << ". ";
			ListSGK[i].Xuat();
		}
	}
	if (!daTimThay)
		cout << "\nKhong tim thay thong tin sach giao khoa cua nha xuat ban nay!";
}
