// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cHocVien.h"

cHocVien::cHocVien(string ma, string ten, cDate ns, unsigned char khoa, int sobuoi)
{
	maHV = ma;
	hoTen = ten;
	ngaySinh = ns;
	khoaHoc = khoa;
	tongSoBuoiHoc = sobuoi;
	hocPhi = 0;
	loai = MAC_DINH;
}

string cHocVien::getMaHV() const
{
	return maHV;
}
void cHocVien::setMaHV(string ma)
{
	maHV = ma;
}
string cHocVien::getHoTen() const
{
	return hoTen;
}
void cHocVien::setHoTen(string ten)
{
	hoTen = ten;
}
cDate cHocVien::getNgaySinh() const
{
	return ngaySinh;
}
void cHocVien::setNgaySinh(cDate ns)
{
	ngaySinh = ns;
}
unsigned char cHocVien::getKhoaHoc() const
{
	return khoaHoc;
}
void cHocVien::setKhoaHoc(unsigned char khoa)
{
	khoaHoc = khoa;
}
int cHocVien::getTongSoBuoiHoc() const
{
	return tongSoBuoiHoc;
}
void cHocVien::setTongSoBuoiHoc(int sobuoi)
{
	tongSoBuoiHoc = sobuoi;
}

void cHocVien::Nhap()
{
	cin.ignore();
	cout << "Nhap ma hoc vien: ";
	getline(cin, maHV);
	cout << "Nhap ho ten hoc vien: ";
	getline(cin, hoTen);
	cout << "Nhap ngay sinh (dd mm yyyy): ";
	ngaySinh.Nhap();
	cout << "Nhap khoa hoc (1: Co ban, 2: Ielts, 3: Toeic): ";
	cin >> khoaHoc;
	while (khoaHoc < '1' || khoaHoc > '3') {
		cout << "Khoa hoc khong hop le! Vui long nhap lai: ";
		cin >> khoaHoc;
	}
	cout << "Nhap tong so buoi hoc: ";
	cin >> tongSoBuoiHoc;
	while(tongSoBuoiHoc < 0)
	{
		cout << "Tong so buoi hoc khong hop le! Vui long nhap lai: ";
		cin >> tongSoBuoiHoc;
	}
}

void cHocVien::Xuat() const
{
	cout << "Ma hoc vien: " << maHV;
	cout << " | Ho ten hoc vien: " << hoTen;
	cout << " | Ngay sinh: ";
	ngaySinh.Xuat();
	cout << " | Khoa hoc: ";
	switch (khoaHoc)
	{
		case '1':
			cout << "Co ban";
			break;
		case '2':
			cout << "Ielts";
			break;
		case '3':
			cout << "Toeic";
			break;
		default:
			cout << "Khong xac dinh";
			break;
	}
	cout << " | Tong so buoi hoc: " << tongSoBuoiHoc;
}


