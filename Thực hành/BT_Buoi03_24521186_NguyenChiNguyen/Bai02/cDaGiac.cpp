// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "iostream"
#include "cDaGiac.h"
#include "graphics.h"
#pragma comment(lib, "graphics.lib")
using namespace std;

// Ham phu de tinh do dai mot canh cua tam giac
float TinhKhoangCachHaiDiem(cDiem A, cDiem B)
{
	float dX = B.getHoanhDo() - A.getHoanhDo();
	float dY = B.getTungDo() - A.getTungDo();
	return sqrt(dX * dX + dY * dY);
}

// Ham tinh tich co huong cua hai vector tao thanh bỏi ba diem
float TinhTichCoHuongCua(cDiem A, cDiem B, cDiem C)
{
	float xVectorAB = B.getHoanhDo() - A.getHoanhDo();
	float yVectorAB = B.getTungDo() - A.getTungDo();
	float xVectorBC = C.getHoanhDo() - B.getHoanhDo();
	float yVectorBC = C.getTungDo() - B.getTungDo();
	return xVectorAB * yVectorBC - yVectorAB * xVectorBC;
}

// Constructor va Destructor
cDaGiac::cDaGiac(int soDinh)
{
	// so dinh cua mot da giac phai >= 3, neu < 3 coi nhu so dinh = 0
	if (soDinh < 3)
	{
		iSoDinh = 0;
		DSDiem = NULL;
	}
	else
	{
		iSoDinh = soDinh;
		DSDiem = new cDiem[soDinh];
	}
}
int cDaGiac::getSoDinh()
{
	return iSoDinh;
}

cDaGiac::~cDaGiac()
{
	delete[] DSDiem;
	DSDiem = NULL;
}

// Nhap va xuat
void cDaGiac::Nhap()
{
	cout << "Nhap so dinh cua da giac: ";
	cin >> iSoDinh;
	while (iSoDinh < 3)
	{
		cout << "So dinh khong hop le, vui long nhap lai!" << endl;
		cin >> iSoDinh;
	}
	DSDiem = new cDiem[iSoDinh];
	for (int i = 0; i < iSoDinh; i++)
	{
		cout << "Nhap toa do dinh thu " << i + 1 << ": ";
		DSDiem[i].Nhap();
	}
}
void cDaGiac::Xuat() const
{
	for (int i = 0; i < iSoDinh; i++)
	{
		cout << "(" << DSDiem[i].getHoanhDo() << ", " << DSDiem[i].getTungDo() << ") ";
	}
	cout << endl;
}

// Kiem tra tinh chat cua mot da giac
bool cDaGiac::KiemTraDeu() const
{
	float DoDaiCanhGoc = TinhKhoangCachHaiDiem(DSDiem[0], DSDiem[1]);
	for (int i = 1; i < iSoDinh; i++)
	{
		if (TinhKhoangCachHaiDiem(DSDiem[i], DSDiem[(i + 1) % iSoDinh]) != DoDaiCanhGoc)
			return false;
	}
	return true;
}
bool cDaGiac::KiemTraHinhDang() const
{
	float GiaTriTichCoHuongGoc = TinhTichCoHuongCua(DSDiem[iSoDinh - 2], DSDiem[iSoDinh - 1], DSDiem[0]);
	for (int i = 0; i < iSoDinh; i++)
	{
		float GiaTriTichCoHuongHienTai = TinhTichCoHuongCua(DSDiem[i], DSDiem[(i + 1) % iSoDinh], DSDiem[(i + 2) % iSoDinh]);
		if (GiaTriTichCoHuongHienTai * GiaTriTichCoHuongGoc < 0)
			return false;
		if (GiaTriTichCoHuongHienTai != 0)
			GiaTriTichCoHuongGoc = GiaTriTichCoHuongHienTai;
	}
	return true;
}


// Chu vi va dien tich
float cDaGiac::TinhChuVi() const
{
	float chuVi = 0;
	for (int i = 0; i < iSoDinh; i++)
	{
		chuVi += TinhKhoangCachHaiDiem(DSDiem[i], DSDiem[(i + 1) % iSoDinh]);
	}
	return chuVi;
}
float cDaGiac::TinhDienTich() const
{
	float dienTich = 0;
	for (int i = 0; i < iSoDinh; i++)
	{
		dienTich += DSDiem[i].getHoanhDo() * DSDiem[(i + 1) % iSoDinh].getTungDo() - DSDiem[(i + 1) % iSoDinh].getHoanhDo() * DSDiem[i].getTungDo();
	}
	return 0.5 * abs(dienTich);
}

// Thay doi toa do cac dinh cua da giac
void cDaGiac::TinhTien(float x, float y)
{
	for (int i = 0; i < iSoDinh; i++)
	{
		DSDiem[i].TinhTien(x, y);
	}
}

void cDaGiac::QuayGoc90Do(bool TheoChieuKimDongHo)
{
	for (int i = 0; i < iSoDinh; i++)
	{
		DSDiem[i].Quay(TheoChieuKimDongHo);
	}
}

void cDaGiac::ThayDoiKichThuoc(float fHeSo)
{
	if (fHeSo <= 0)
		return;
	for (int i = 0; i < iSoDinh; i++)
	{
		DSDiem[i].setHoanhDo(DSDiem[i].getHoanhDo() * fHeSo);
		DSDiem[i].setTungDo(DSDiem[i].getTungDo() * fHeSo);
	}
}

// Ve do thi cua da giac
void cDaGiac::Ve() const
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

	// Ve
	for (int i = 0; i < iSoDinh; i++)
	{
		float hoanhDoDiemHienTai = DSDiem[i].getHoanhDo() * iTyLeChia;
		float tungDoDiemHienTai = DSDiem[i].getTungDo() * iTyLeChia;
		float hoanhDoDiemTiepTheo = DSDiem[(i + 1) % iSoDinh].getHoanhDo() * iTyLeChia;
		float tungDoDiemTiepTheo = DSDiem[(i + 1) % iSoDinh].getTungDo() * iTyLeChia;

		line(GocToaDo.getHoanhDo() + hoanhDoDiemHienTai, GocToaDo.getTungDo() - tungDoDiemHienTai, GocToaDo.getHoanhDo() + hoanhDoDiemTiepTheo, GocToaDo.getTungDo() - tungDoDiemTiepTheo);
	}

	getch();
	closegraph();
}