#pragma once
class cArray
{
private:
	int size;
	int* arr = nullptr;

public:
	// Ham khoi tao
	cArray(int);

	// Cac ham thanh phan
	void Xuat();
	int TimSoAmLonNhat();
	int DemSoLanXuatHienCuaGiaTri(int);
	bool KiemTraMangGiamDan();
	void SapXepTangDan();


	// Ham pha huy
	~cArray();
};

