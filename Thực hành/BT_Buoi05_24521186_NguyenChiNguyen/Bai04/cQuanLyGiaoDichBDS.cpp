// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLyGiaoDichBDS.h"

void cQuanLyGiaoDichBDS::NhapDSGDDat(int n)
{
	DS_GiaoDichDat.resize(n);
	for (int i = 0; i < DS_GiaoDichDat.size(); i++)
	{
		cout << "Nhap giao dich dat thu " << i + 1 << ": \n";
		DS_GiaoDichDat[i].Nhap();
	}
}

void cQuanLyGiaoDichBDS::NhapDSGDNhaPho(int n)
{
	DS_GiaoDichNhaPho.resize(n);
	for (int i = 0; i < DS_GiaoDichNhaPho.size(); i++)
	{
		cout << "Nhap giao dich nha pho thu " << i + 1 << ": \n";
		DS_GiaoDichNhaPho[i].Nhap();
	}
}

void cQuanLyGiaoDichBDS::NhapDSGDCanHo(int n)
{
	DS_GiaoDichCanHo.resize(n);
	for (int i = 0; i < DS_GiaoDichCanHo.size(); i++)
	{
		cout << "Nhap giao dich can ho chung cu thu " << i + 1 << ": \n";
		DS_GiaoDichCanHo[i].Nhap();
	}
}

int cQuanLyGiaoDichBDS::TongSoLuongGiaoDichDat() const
{
	return DS_GiaoDichDat.size();
}

int cQuanLyGiaoDichBDS::TongSoLuongGiaoDichNhaPho() const
{
	return DS_GiaoDichNhaPho.size();
}

int cQuanLyGiaoDichBDS::TongSoLuongGiaoDichCanHo() const
{
	return DS_GiaoDichCanHo.size();
}

float cQuanLyGiaoDichBDS::TrungBinhThanhTienGDCanHo() const
{
	if (DS_GiaoDichCanHo.size() == 0)
		return 0;
	float kq = 0;
	for (int i = 0; i < DS_GiaoDichCanHo.size(); i++)
	{
		kq += DS_GiaoDichCanHo[i].TinhThanhTien();
	}
	return round((kq / DS_GiaoDichCanHo.size()) * 100.0) / 100.0;
}

void cQuanLyGiaoDichBDS::GDNhaPhoCoGiaTriCaoNhat() const
{
	int max = 0;
	// Tim thanh tien max
	for (int i = 0; i < DS_GiaoDichNhaPho.size(); i++)
	{
		if (DS_GiaoDichNhaPho[i].TinhThanhTien() > max)
			max = DS_GiaoDichNhaPho[i].TinhThanhTien();
	}
	vector<cGDNhaPho> KQ;
	// Tim cac giao dich co thanh tien max
	for (int i = 0; i < DS_GiaoDichNhaPho.size(); i++)
	{
		if (DS_GiaoDichNhaPho[i].TinhThanhTien() == max)
			KQ.push_back(DS_GiaoDichNhaPho[i]);
	}
	// Xuat
	for (int i = 0; i < KQ.size(); i++)
	{
		cout << i + 1 << ". ";
		KQ[i].Xuat();
	}
}

void cQuanLyGiaoDichBDS::XuatCacGDVaoThang(int thang, int nam) const
{
	vector<cGDDat> KQ_Dat;
	vector<cGDNhaPho> KQ_NhaPho;
	vector<cGDCanHoChungCu> KQ_CanHo;
	for (int i = 0; i < DS_GiaoDichDat.size(); i++)
	{
		if (DS_GiaoDichDat[i].getNgayGD().getThang() == thang && DS_GiaoDichDat[i].getNgayGD().getNam() == nam)
			KQ_Dat.push_back(DS_GiaoDichDat[i]);
	}
	for (int i = 0; i < DS_GiaoDichNhaPho.size(); i++)
	{
		if (DS_GiaoDichNhaPho[i].getNgayGD().getThang() == thang && DS_GiaoDichNhaPho[i].getNgayGD().getNam() == nam)
			KQ_NhaPho.push_back(DS_GiaoDichNhaPho[i]);
	}
	for (int i = 0; i < DS_GiaoDichCanHo.size(); i++)
	{
		if (DS_GiaoDichCanHo[i].getNgayGD().getThang() == thang && DS_GiaoDichCanHo[i].getNgayGD().getNam() == nam)
			KQ_CanHo.push_back(DS_GiaoDichCanHo[i]);
	}
	cout << "Giao dich dat: \n";
	for (int i = 0; i < KQ_Dat.size(); i++)
	{
		cout << i + 1 << ". ";
		KQ_Dat[i].Xuat();
	}
	cout << "Giao dich nha pho: \n";
	for (int i = 0; i < KQ_NhaPho.size(); i++)
	{
		cout << i + 1 << ". ";
		KQ_NhaPho[i].Xuat();
	}
	cout << "Giao dich can ho chung cu: \n";
	for (int i = 0; i < KQ_CanHo.size(); i++)
	{
		cout << i + 1 << ". ";
		KQ_CanHo[i].Xuat();
	}
}
