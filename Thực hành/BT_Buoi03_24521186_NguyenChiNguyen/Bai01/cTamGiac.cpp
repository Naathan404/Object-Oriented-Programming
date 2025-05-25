// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cTamGiac.h"
#include "iostream"
#include "math.h"
#include "graphics.h"
#pragma comment(lib, "graphics.lib")

using namespace std;


void cTamGiac::Nhap()
{
	cout << "Nhap toa do dinh thu nhat: ";
	cTamGiac::A.Nhap();
	cout << "Nhap toa do dinh thu hai: ";
	cTamGiac::B.Nhap();
	cout << "Nhap toa do dinh thu ba: ";
	cTamGiac::C.Nhap();
	while (!KiemTraTamGiacHopLe(cTamGiac::A, cTamGiac::B, cTamGiac::C))
	{
		cout << "Tam giac khong hop le! Vui long nhap lai!";
		cout << "Nhap toa do dinh thu nhat: ";
		cTamGiac::A.Nhap();
		cout << "Nhap toa do dinh thu hai: ";
		cTamGiac::B.Nhap();
		cout << "Nhap toa do dinh thu ba: ";
		cTamGiac::C.Nhap();
	}
}

void cTamGiac::Xuat() const
{
	cTamGiac::A.Xuat();
	cout << ", ";
	cTamGiac::B.Xuat();
	cout << ", ";
	cTamGiac::C.Xuat();
	cout << endl;
}

string cTamGiac::KiemTraLoaiTamGiac() const
{
	float DoDaiAB = TinhKhoangCachHaiDiem(A, B);
	float DoDaiBC = TinhKhoangCachHaiDiem(B, C);
	float DoDaiCA = TinhKhoangCachHaiDiem(C, A);
	bool LaTamGiacVuong = KiemTraVuong(DoDaiAB, DoDaiBC, DoDaiCA) || KiemTraVuong(DoDaiBC, DoDaiCA, DoDaiAB) || KiemTraVuong(DoDaiCA, DoDaiAB, DoDaiBC);
	if (DoDaiAB == DoDaiBC && DoDaiBC == DoDaiCA)
	{
		return "Tam giac deu";
	}
	if (DoDaiAB == DoDaiBC || DoDaiBC == DoDaiCA || DoDaiCA == DoDaiAB)
	{
		if (LaTamGiacVuong)
			return "Tam giac vuong can";
		else
			return "Tam giac can";
	}
	if (LaTamGiacVuong)
	{
		return "Tam giac vuong";
	}
	return "Tam giac thuong";
}

float cTamGiac::TinhChuVi() const
{
	return TinhKhoangCachHaiDiem(A, B) + TinhKhoangCachHaiDiem(B, C) + TinhKhoangCachHaiDiem(A, C);
}

float cTamGiac::TinhDienTich() const
{
	return 0.5 * abs((A.getHoanhDo() * (B.getTungDo() - C.getTungDo()))
		+ (B.getHoanhDo() * (C.getTungDo() - A.getTungDo()))
		+ (C.getHoanhDo() * (A.getTungDo() - B.getTungDo())));
}

void cTamGiac::TinhTien(float x, float y)
{
	A.TinhTien(x, y);
	B.TinhTien(x, y);
	C.TinhTien(x, y);
}

void cTamGiac::QuayGoc90Do(bool NeuTheoChieuKimDongHo)
{
	A.Quay(NeuTheoChieuKimDongHo);
	B.Quay(NeuTheoChieuKimDongHo);
	C.Quay(NeuTheoChieuKimDongHo);
}

void cTamGiac::ThayDoiKichThuoc(float fHeSo)
{
	if (fHeSo <= 0)
		return;
	A.setHoanhDo(A.getHoanhDo() * fHeSo);
	A.setTungDo(A.getTungDo() * fHeSo);
	B.setHoanhDo(B.getHoanhDo() * fHeSo);
	B.setTungDo(B.getTungDo() * fHeSo);
	C.setHoanhDo(C.getHoanhDo() * fHeSo);
	C.setTungDo(C.getTungDo() * fHeSo);
}

void cTamGiac::Ve() const
{
	int iChieuDaiManHinh = 600, iChieuRongManHinh = 600;
	initwindow(iChieuDaiManHinh, iChieuRongManHinh, "Do thi xOy");
	// Ve truc tung va truc hoanh
	cDiem GocToaDo(iChieuDaiManHinh / 2, iChieuRongManHinh / 2);
	line(iChieuDaiManHinh / 2, iChieuRongManHinh, iChieuDaiManHinh / 2, 0);
	line(0, iChieuRongManHinh / 2, iChieuDaiManHinh, iChieuRongManHinh / 2);
	int iTyLeChia = 20;
	for (int i = -20; i < 20; i++)
	{
		line(GocToaDo.getHoanhDo() - 1, GocToaDo.getTungDo() + iTyLeChia * i, GocToaDo.getHoanhDo() + 1, GocToaDo.getTungDo() + iTyLeChia * i);
		line(GocToaDo.getHoanhDo() + iTyLeChia * i, GocToaDo.getTungDo() - 1, GocToaDo.getHoanhDo() + iTyLeChia * i, GocToaDo.getTungDo() + 1);
	}

	float xA = A.getHoanhDo() * iTyLeChia;
	float yA = A.getTungDo() * iTyLeChia;
	float xB = B.getHoanhDo() * iTyLeChia;
	float yB = B.getTungDo() * iTyLeChia;
	float xC = C.getHoanhDo() * iTyLeChia;
	float yC = C.getTungDo() * iTyLeChia;

	line(GocToaDo.getHoanhDo() + xA, GocToaDo.getTungDo() - yA, GocToaDo.getHoanhDo() + xB, GocToaDo.getTungDo() - yB);
	line(GocToaDo.getHoanhDo() + xC, GocToaDo.getTungDo() - yC, GocToaDo.getHoanhDo() + xB, GocToaDo.getTungDo() - yB);
	line(GocToaDo.getHoanhDo() + xA, GocToaDo.getTungDo() - yA, GocToaDo.getHoanhDo() + xC, GocToaDo.getTungDo() - yC);
	//line(B.getHoanhDo(), B.getTungDo(), C.getHoanhDo(), C.getTungDo());
	//line(C.getHoanhDo(), C.getTungDo(), A.getHoanhDo(), A.getTungDo());

	getch();
	closegraph();
}

// Ham phu de tinh do dai mot canh cua tam giac
float cTamGiac::TinhKhoangCachHaiDiem(cDiem A, cDiem B)
{
	float dX = B.getHoanhDo() - A.getHoanhDo();
	float dY = B.getTungDo() - A.getTungDo();
	return sqrt(dX * dX + dY * dY);
}

// Kiem tra tam giac co hop le hay khong
bool cTamGiac::KiemTraTamGiacHopLe(cDiem A, cDiem B, cDiem C)
{
	float DoDaiAB = TinhKhoangCachHaiDiem(A, B);
	float DoDaiBC = TinhKhoangCachHaiDiem(B, C);
	float DoDaiCA = TinhKhoangCachHaiDiem(C, A);
	if (((DoDaiAB > abs(DoDaiBC - DoDaiCA)) && (DoDaiAB < DoDaiBC + DoDaiCA)) 
	|| ((DoDaiBC > abs(DoDaiCA - DoDaiAB)) && (DoDaiBC < DoDaiCA + DoDaiAB)) 
	|| ((DoDaiCA > abs(DoDaiAB - DoDaiBC)) && (DoDaiCA < DoDaiAB + DoDaiBC)))
		return true;
	return false;
}

// Kiem tra tam giac co vuong hay khong
bool cTamGiac::KiemTraVuong(cDiem A, cDiem B, cDiem C)
{
	if (!KiemTraTamGiacHopLe(A, B, C))
		return false;
	float BinhPhuongCanhAB = TinhKhoangCachHaiDiem(A, B) * TinhKhoangCachHaiDiem(A, B);
	float BinhPhuongCanhBC = TinhKhoangCachHaiDiem(B, C) * TinhKhoangCachHaiDiem(B, C);
	float BinhPhuongCanhCA = TinhKhoangCachHaiDiem(C, A) * TinhKhoangCachHaiDiem(C, A);
	return (BinhPhuongCanhAB == BinhPhuongCanhBC + BinhPhuongCanhCA)
		|| (BinhPhuongCanhBC == BinhPhuongCanhCA + BinhPhuongCanhAB)
		|| (BinhPhuongCanhCA == BinhPhuongCanhAB + BinhPhuongCanhBC);
}
