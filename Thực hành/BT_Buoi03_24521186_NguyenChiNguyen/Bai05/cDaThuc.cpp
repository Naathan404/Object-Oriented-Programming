// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#include "cDaThuc.h"
#include <iostream>
using namespace std;

cDaThuc::cDaThuc(int bac)
{
	if (bac == 0)
		List.push_back(cDonThuc(0, 0));
	if (bac > 0)
		for (int i = bac; i >= 0; i--)
			List.push_back(cDonThuc(0, i));
}

void cDaThuc::Nhap()
{
	int bac;
	cout << "Nhap bac cua da thuc: ";
	cin >> bac;
	List.resize(bac + 1);
	for (int i = 0; i < List.size(); i++)
	{
		cout << "+Nhap he so cua don thuc bac " << List.size() - i - 1 << ": ";
		float tempHeSo;
		cin >> tempHeSo;
		List[i].setHeSo(tempHeSo);
		List[i].setSoMu(List.size() - i - 1);
	}
}

void cDaThuc::Xuat() const
{
	bool LaDonThucDauTien = true;
	for (cDonThuc donThuc : List)
	{
		if (donThuc.getHeSo() == 0)
			continue;
		if (!LaDonThucDauTien)
		{
			if (donThuc.getHeSo() > 0)
				cout << " + ";
			else
				cout << " - ";
		}
		if (LaDonThucDauTien)
		{
			donThuc.Xuat();
			LaDonThucDauTien = false;
			continue;
		}
		cDonThuc temp = donThuc;
		temp.setHeSo(abs(donThuc.getHeSo()));
		temp.Xuat();
		if (LaDonThucDauTien)
			LaDonThucDauTien = false;
	}
	if (LaDonThucDauTien)
		cout << "0";
}

float cDaThuc::TinhGiaTri(float x) const
{
	float kq = 0;
	for (int i = 0; i < List.size(); i++)
	{
		kq += List[i].Tinh(x);
	}
	return kq;
}

cDaThuc cDaThuc::operator+(cDaThuc other) const
{
	cDaThuc KQ;
	int i = 0, j = 0;
	while (i < this->List.size() && j < other.List.size())
	{
		int soMu1 = this->List[i].getSoMu();
		int soMu2 = other.List[j].getSoMu();
		if (soMu1 == soMu2)
		{
			float tongHeSo = this->List[i].getHeSo() + other.List[j].getHeSo();
			KQ.List.push_back(cDonThuc(tongHeSo, soMu1));
			i++;
			j++;
		}
		else if (soMu1 > soMu2)
		{
			KQ.List.push_back(this->List[i]);
			i++;
		}
		else
		{
			KQ.List.push_back(other.List[j]);
			j++;
		}
	}
	while (i < this->List.size())
	{
		KQ.List.push_back(this->List[i++]);
	}
	while (j < other.List.size())
	{
		KQ.List.push_back(other.List[j++]);
	}

	return KQ;
}

cDaThuc cDaThuc::operator-(cDaThuc other) const
{
	cDaThuc B = other;
	for (int i = 0; i < B.List.size(); i++)
	{
		B.List[i].setHeSo(-B.List[i].getHeSo());
	}
	return *this + B;
}

