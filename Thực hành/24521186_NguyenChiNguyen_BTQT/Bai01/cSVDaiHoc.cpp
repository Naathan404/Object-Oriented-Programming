//Mã số sinh viên: 24521186
//Họ và tên: Nguyễn Chí Nguyên
//Ngày sinh: 10/03/2006
//Lớp: IT002.P26.2


#include "cSVDaiHoc.h"
#include <string>
using namespace std;

cSVDaiHoc::cSVDaiHoc(int masv, string hoten, string diachi, int sotc, float dtb, string tenlv, float dlv)
{
	iMaSoSV = masv;
	sHoTen = hoten;
	sDiaChi = diachi;
	sTenLuanVan = dlv;
	setTongSoTC(sotc);
	setDiemTB(dtb);
	setDiemLuanVan(dlv);
}

void cSVDaiHoc::setMaSoSV(int masv)
{
	iMaSoSV = masv;
}
void cSVDaiHoc::setTongSoTC(int tc)
{
	iTongSoTC = (tc > 0 ? tc : 0);
}
void cSVDaiHoc::setHoTen(string hoten)
{
	sHoTen = hoten;
}
void cSVDaiHoc::setDiaChi(string diachi)
{
	sDiaChi = diachi;
}
void cSVDaiHoc::setTenLuanVan(string tenlv)
{
	sTenLuanVan = tenlv;
}
void cSVDaiHoc::setDiemTB(float dtb)
{
	fDiemTrungBinh = (dtb > 0 && dtb <= 10 ? dtb : 0);
}
void cSVDaiHoc::setDiemLuanVan(float dlv)
{
	fDiemLuanVan = (dlv > 0 && dlv <= 10 ? dlv : 0);
}

int cSVDaiHoc::getMaSoSV() const
{
	return iMaSoSV;
}
int cSVDaiHoc::getTongSoTC() const
{
	return iTongSoTC;
}
string cSVDaiHoc::getHoTen() const
{
	return sHoTen;
}
string cSVDaiHoc::getDiaChi() const
{
	return sDiaChi;
}
string cSVDaiHoc::getTenLuanVan() const
{
	return sTenLuanVan;
}
float cSVDaiHoc::getDiemTB() const
{
	return fDiemTrungBinh;
}
float cSVDaiHoc::getDiemLuanVan() const
{
	return fDiemLuanVan;
}

void cSVDaiHoc::Nhap()
{
	cout << "Nhap ma so sinh vien: ";
	cin >> iMaSoSV;
	cout << "Nhap ho & ten: ";
	cin.ignore();
	getline(cin, sHoTen);
	cout << "Nhap dia chi: ";
	getline(cin, sDiaChi);
	cout << "Nhap tong so tin chi: ";
	cin >> iTongSoTC;
	cout << "Nhap diem trung binh: ";
	cin >> fDiemTrungBinh;
	cout << "Nhap ten luan van: ";
	cin.ignore();
	getline(cin, sTenLuanVan);
	cout << "Nhap diem luan van: ";
	cin >> fDiemLuanVan;
}

void cSVDaiHoc::Xuat() const
{
	cout << "MSSV: " << iMaSoSV;
	cout << " | Ho & ten: " << sHoTen;
	cout << " | Dia chi: " << sDiaChi;
	cout << " | Tong tin chi: " << iTongSoTC;
	cout << " | Diem trung binh: " << fDiemTrungBinh;
	cout << " | Ten luan van: " << sTenLuanVan;
	cout << " | Diem luan van: " << fDiemLuanVan;
}

bool cSVDaiHoc::DuDieuKienTotNghiep() const
{
	//Sinh viên hệ đại học đủ điều kiện tốt nghiệp khi:
	// +Tổng số tín chỉ từ 145 trở lên
	// +Điểm trung bình từ 5 trở lên và phải bảo vệ luận văn với điểm số đạt được từ 5 điểm trở lên
	return (iTongSoTC >= 145 && fDiemTrungBinh >= 5 && fDiemLuanVan >= 5);
}
