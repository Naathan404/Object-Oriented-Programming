// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cCandidate.h"
#include "vector"

#pragma once
class cListCandidate
{
private:
	std::vector<cCandidate> List;

public:
	// Khoi tao danh sach n thi sinh voi cac gia tri mac dinh ban dau
	cListCandidate(int = 0);

	void Nhap();
	void Xuat() const;
	// Xuat thong tin cac thi sinh co tong diem lon hon 15
	void XuatTongDiemLonHon15() const;
	// Tra ve thi sinh co tong diem cao nhat
	cCandidate TimTongDiemCaoNhat() const;
	// SapXepTheoTongDiem(bool CachSapXeo): CachSapXep = true, sap xep tang dan, CachSapXep = false, sap xep giam dan
	void SapXepTheoTongDiem(bool);
};

