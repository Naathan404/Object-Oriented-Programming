// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "QuanLyKhachHang.h"
#include "fstream"
#include "filesystem"
using namespace std;

int main()
{
	ifstream in("XYZ.INP");
	ofstream out("XYZ.OUT");
	if (!in.is_open()) {
		cout << "Không thể mở XYZ.INP\n";
		return 1;
	}
	if (!out.is_open()) {
		cout << "Không thể tạo XYZ.OUT\n";
		return 1;
	}
	QuanLyKhachHang qlkh;
	int x, y, z;
	in >> x >> y >> z;
	qlkh.NhapDS(x, y, z, in);
	qlkh.XuatDS(out);

	return 0;
}