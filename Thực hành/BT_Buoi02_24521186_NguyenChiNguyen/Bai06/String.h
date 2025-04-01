// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#pragma once
class String
{
private:
	char* str;
	int length;

public:
	// Constructors
	String();
	String(const char*);
	String(const String&);
	
	// Processing funtions
	void Nhap();
	void Xuat() const;
	void Copy(char*);
	int Length() const;
	String Connect(String&) const;
	void Reverse();
	void ToLower();
	void ToUpper();

	// Destructor
	~String();
};

