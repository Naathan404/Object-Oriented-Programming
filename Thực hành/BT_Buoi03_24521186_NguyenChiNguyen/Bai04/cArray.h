// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
template <class T>
class cArray
{
private:
	int size;
	T* arr;

public:
	// Khoi tao
	cArray(int = 0);

	// Cac ham thanh phan
	void Xuat();
	// DemSoLanXuatHienCuaGiaTri(T X): Tra ve so lan xuat hien cua gia tri X trong mang
	int DemSoLanXuatHien(T);
	// Tra ve <true> neu mang tang dan, <false> neu mang bien doi hoac giam dan
	bool KiemTraMangTangDan();
	// Tra ve phan tu la so le nho nhat trong mang. Tra ve 0 neu khong tim thay phan tu le
	int TimLeNhoNhat();
	// Tra ve 0 neu khong tim thay so nguyen to trong mang
	int TimSoNguyenoToLonNhat();
	// SapXep(bool Chieu): Chieu = true neu sap xep tang dan, Chieu = false neu sap xep giam dan.
	void SapXep(bool);

	// Ham pha huy
	~cArray();
};
