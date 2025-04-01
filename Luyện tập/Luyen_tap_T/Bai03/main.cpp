#include "cSoPhuc.h"
#include "cThongBao.h"


int main()
{
	cSoPhuc A, B;
	cThongBao TB;
	TB.ThongBaoNhap(1);
	A.Nhap();
	TB.ThongBaoNhap(2);
	B.Nhap();
	TB.ThongBaoXuat(1);
	A.Xuat();
	TB.XuongDong();
	TB.ThongBaoXuat(2);
	B.Xuat();
	TB.XuongDong();

	// Ket qua phep Cong hai so phuc
	TB.ThongBaoKetQuaPhepToan('+', A, B);
	A.Cong(B).Xuat();
	TB.XuongDong();

	// Ket qua phep toan Tru hai so phuc
	TB.ThongBaoKetQuaPhepToan('-', A, B);
	A.Tru(B).Xuat();
	TB.XuongDong();

	// Ket qua phep toan Nhan hai so phuc
	TB.ThongBaoKetQuaPhepToan('*', A, B);
	A.Nhan(B).Xuat();
	TB.XuongDong();

	// Ket qua phep toan Chia hai so phuc
	TB.ThongBaoKetQuaPhepToan('/', A, B);
	A.Chia(B).Xuat();
	TB.XuongDong();

	return 0;
}
