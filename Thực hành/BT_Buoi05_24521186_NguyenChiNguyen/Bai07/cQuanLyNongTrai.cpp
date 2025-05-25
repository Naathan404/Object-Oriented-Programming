// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLyNongTrai.h"

void cQuanLyNongTrai::NhapSoLuongGiaSuc()
{
	int n, m, p;
	cout << "Nhap so luong bo: ";
	cin >> n;
	cout << "Nhap so luong cuu: ";
	cin >> m;
	cout << "Nhap so luong de: ";
	cin >> p;
	DS_Bo.resize(n);
	DS_Cuu.resize(m);
	DS_De.resize(p);
}

void cQuanLyNongTrai::ThongKeSoLuongGiaSucMoiLoai() const
{
	cout << "So luong bo: " << DS_Bo.size() << endl;
	cout << "So luong cuu: " << DS_Cuu.size() << endl;
	cout << "So luong de: " << DS_De.size() << endl;
}

float cQuanLyNongTrai::TongSoSuaThuDuoc() const
{
	return fTongSoSua;
}

void cQuanLyNongTrai::PhatRaCacTiengKeu() const
{
	for (int i = 0; i < DS_Bo.size(); i++)
	{
		DS_Bo[i].Keu();
		cout << " ";
	}
	cout << endl;
	for (int i = 0; i < DS_Cuu.size(); i++)
	{
		DS_Cuu[i].Keu();
		cout << " ";
	}
	cout << endl;
	for (int i = 0; i < DS_De.size(); i++)
	{
		DS_De[i].Keu();
		cout << " ";
	}
	cout << endl;
}

void cQuanLyNongTrai::QuaMotLuaSinh()
{
	int n = DS_Bo.size(), m = DS_Cuu.size(), p = DS_De.size();
	for (int i = 0; i < DS_Bo.size(); i++)
		n += DS_Bo[i].SinhCon();
	for (int i = 0; i < DS_Cuu.size(); i++)
		m += DS_Cuu[i].SinhCon();
	for (int i = 0; i < DS_De.size(); i++)
		p += DS_De[i].SinhCon();
	DS_Bo.resize(n);
	DS_Cuu.resize(m);
	DS_De.resize(p);
}

void cQuanLyNongTrai::QuaMotLuocChoSua()
{
	float kq = 0;
	for (int i = 0; i < DS_Bo.size(); i++)
		kq += DS_Bo[i].ChoSua();
	for (int i = 0; i < DS_Cuu.size(); i++)
		kq += DS_Cuu[i].ChoSua();
	for (int i = 0; i < DS_De.size(); i++)
		kq += DS_De[i].ChoSua();
	fTongSoSua += kq;
}
