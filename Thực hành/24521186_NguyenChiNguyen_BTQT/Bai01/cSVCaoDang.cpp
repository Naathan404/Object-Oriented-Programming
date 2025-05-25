//Mã số sinh viên: 24521186
//Họ và tên: Nguyễn Chí Nguyên
//Ngày sinh: 10/03/2006
//Lớp: IT002.P26.2


#include "cSVCaoDang.h"
#include <string>
using namespace std;

cSVCaoDang::cSVCaoDang(int masv, string hoten, string diachi, int sotc, float dtb, float dtn)
{
	iMaSoSV = masv;
	sHoTen = hoten;
	sDiaChi = diachi;
	setTongSoTC(sotc);
	setDiemTB(dtb);
	setDiemThiTN(dtn);
}

void cSVCaoDang::setMaSoSV(int masv)
{
	iMaSoSV = masv;
}
void cSVCaoDang::setTongSoTC(int tc)
{
	iTongSoTC = (tc > 0 ? tc : 0);
}
void cSVCaoDang::setHoTen(string hoten)
{
	sHoTen = hoten;
}
void cSVCaoDang::setDiaChi(string diachi)
{
	sDiaChi = diachi;
}
void cSVCaoDang::setDiemTB(float dtb)
{
	fDiemTrungBinh = (dtb > 0 && dtb <= 10 ? dtb : 0);
}
void cSVCaoDang::setDiemThiTN(float dtn)
{
	fDiemTotNghiep = (dtn > 0 && dtn <= 10 ? dtn : 0);
}

int cSVCaoDang::getMaSoSV() const
{
	return iMaSoSV;
}
int cSVCaoDang::getTongSoTC() const
{
	return iTongSoTC;
}
string cSVCaoDang::getHoTen() const
{
	return sHoTen;
}
string cSVCaoDang::getDiaChi() const
{
	return sDiaChi;
}
float cSVCaoDang::getDiemTB() const
{
	return fDiemTrungBinh;
}
float cSVCaoDang::getDiemThiTN() const
{
	return fDiemTotNghiep;
}

void cSVCaoDang::Nhap()
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
	cout << "Nhap diem thi tot nghiep: ";
	cin >> fDiemTotNghiep;
}

void cSVCaoDang::Xuat() const
{
	cout << "MSSV: " << iMaSoSV;
	cout << " | Ho & ten: " << sHoTen;
	cout << " | Dia chi: " << sDiaChi;
	cout << " | Tong tin chi: " << iTongSoTC;
	cout << " | Diem trung binh: " << fDiemTrungBinh;
	cout << " | Diem thi tot nghiep: " << fDiemTotNghiep;
}

bool cSVCaoDang::DuDieuKienTotNghiep() const
{
	//Sinh viên hệ cao đẳng đủ điều kiện tốt nghiệp khi: 
	// + Có tổng số tín chỉ từ 110 trở lên, 
	// + Điểm trung bình từ 5 trở lên và điểm thi tốt nghiệp phải đạt từ 5 trở lên.
	return (iTongSoTC >= 110 && fDiemTrungBinh >= 5 && fDiemTotNghiep >= 5);
}
