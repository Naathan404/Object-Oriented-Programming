// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLySinhVien.h"

void cQuanLySinhVien::NhapDSSVCaoDang(int n)
{
	List_SVCaoDang.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap SV Cao Dang " << i + 1 << ": " << endl;
		List_SVCaoDang[i].Nhap();
	}
}

void cQuanLySinhVien::NhapDSSVDaiHoc(int n)
{
	List_SVDaiHoc.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap SV Dai Hoc " << i + 1 << ": " << endl;
		List_SVDaiHoc[i].Nhap();
	}
}

void cQuanLySinhVien::XuatDSSVCaoDang() const
{
	for (int i = 0; i < List_SVCaoDang.size(); i++)
	{
		cout << i + 1 << ". ";
		List_SVCaoDang[i].Xuat();
	}
}

void cQuanLySinhVien::XuatDSSVDaiHoc() const
{
	for (int i = 0; i < List_SVDaiHoc.size(); i++)
	{
		cout << i + 1 << ". ";
		List_SVDaiHoc[i].Xuat();
	}
}

void cQuanLySinhVien::XuatDSSVDuDieuKienTotNghiep() const
{
	cout << "He cao dang: " << endl;
	int j = 1;
	for (int i = 0; i < List_SVCaoDang.size(); i++)
	{
		if (List_SVCaoDang[i].XetTotNghiep())
		{
			cout << j << ". ";
			j++;
			List_SVCaoDang[i].Xuat();
		}
	}
	cout << "He dai hoc: " << endl;
	int k = 1;
	for (int i = 0; i < List_SVDaiHoc.size(); i++)
	{
		if (List_SVDaiHoc[i].XetTotNghiep())
		{
			cout << k << ". ";
			k++;
			List_SVDaiHoc[i].Xuat();
		}
	}
}

void cQuanLySinhVien::XuatDSSVKhongDuDieuKienTotNghiep() const
{
	cout << "He cao dang: " << endl;
	int j = 1;
	for (int i = 0; i < List_SVCaoDang.size(); i++)
	{
		if (!List_SVCaoDang[i].XetTotNghiep())
		{
			cout << j << ". ";
			j++;
			List_SVCaoDang[i].Xuat();
		}
	}
	cout << "He dai hoc: " << endl;
	int k = 1;
	for (int i = 0; i < List_SVDaiHoc.size(); i++)
	{
		if (!List_SVDaiHoc[i].XetTotNghiep())
		{
			cout << k << ". ";
			k++;
			List_SVDaiHoc[i].Xuat();
		}
	}
}

void cQuanLySinhVien::XuatSVDaiHocCoDiemTBCaoNhat() const
{
	float max = 0;
	for (int i = 0; i < List_SVDaiHoc.size(); i++)
	{
		if (List_SVDaiHoc[i].getDiemTB() > max)
			max = List_SVDaiHoc[i].getDiemTB();
	}
	vector<cSVDaiHoc> List_SVDaiHocCoDiemTBCaoNhat;
	for (int i = 0; i < List_SVDaiHoc.size(); i++)
	{
		if (List_SVDaiHoc[i].getDiemTB() == max)
			List_SVDaiHocCoDiemTBCaoNhat.push_back(List_SVDaiHoc[i]);
	}
	for (int i = 0; i < List_SVDaiHocCoDiemTBCaoNhat.size(); i++)
	{
		cout << i + 1 << ". ";
		List_SVDaiHocCoDiemTBCaoNhat[i].Xuat();
		cout << endl;
	}
}
