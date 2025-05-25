#include "HoaDon.h"

HoaDon::HoaDon(string ma, string ten, string diachi, int sokytruoc, int sohientai, int tientt, cDate ngay)
{
	maKH = ma;
	tenKH = ten;
	diaChi = diachi;
	chiSoDienKyTruoc = sokytruoc;
	chiSoDienHienTai = sohientai;
	soTienThanhToan = tientt;
	this->ngay = ngay;
	loai = MAC_DINH;
}

string HoaDon::getMaKH() const { return maKH; }
string HoaDon::getTenKH() const { return tenKH; }
string HoaDon::getDiaChi() const { return diaChi; }
int HoaDon::getChiSoDienKyTruoc() const { return chiSoDienKyTruoc; }
int HoaDon::getChiSoDienHienTai() const { return chiSoDienHienTai; }
int HoaDon::getSoTienThanhToan() const { return soTienThanhToan; }
cDate HoaDon::getNgay() const { return ngay; }
void HoaDon::setMaKH(string ma) { maKH = ma; }
void HoaDon::setTenKH(string ten) { tenKH = ten; }
void HoaDon::setDiaChi(string diachi) { diaChi = diachi; }
void HoaDon::setChiSoDienKyTruoc(int sokytruoc) { chiSoDienKyTruoc = sokytruoc; }
void HoaDon::setChiSoDienHienTai(int sohientai) { chiSoDienHienTai = sohientai; }
void HoaDon::setSoTienThanhToan(int tientt) { soTienThanhToan = tientt; }
void HoaDon::setNgay(int ngay, int thang, int nam) { this->ngay.setNgay(ngay); this->ngay.setThang(thang); this->ngay.setNam(nam); }

void HoaDon::Nhap()
{
	cin.ignore();
	cout << "Nhap ma khach hang: ";
	getline(cin, maKH);
	cout << "Nhap ten khach hang: ";
	getline(cin, tenKH);
	cout << "Nhap dia chi: ";
	getline(cin, diaChi);
	cout << "Nhap chi so dong ho ky truoc: ";
	cin >> chiSoDienKyTruoc;
	while (chiSoDienKyTruoc < 0)
	{
		cout << "Chi so khong hop le! Vui long nhap lai: ";
		cin >> chiSoDienKyTruoc;
	}
	cout << "Nhap chi so dong ho dien hien tai: ";
	cin >> chiSoDienHienTai;
	while (chiSoDienKyTruoc > chiSoDienHienTai)
	{
		cout << "Chi so khong hop le! Vui long nhap lai: ";
		cin >> chiSoDienHienTai;
	}
	cout << "Nhap ngay phat hanh (dd mm yy): ";
	ngay.Nhap();
}

void HoaDon::Xuat() const
{
	cout << "Ma KH: " << maKH;
	cout << " | Ten KH: " << tenKH;
	cout << " | DiaChi: " << diaChi;
	cout << " | Chi so dien ky truoc: " << chiSoDienKyTruoc;
	cout << " | Chi so dien hien tai: " << chiSoDienHienTai;
	cout << " | Ngay phat hanh: ";
	ngay.Xuat();
}

int HoaDon::TinhSoDienTieuThu() const
{
	return chiSoDienHienTai - chiSoDienKyTruoc;
}
