#pragma once
class String
{
private:
	int size;
	char* str = nullptr;

public:
	// Constructor
	String();
	String(int);
	String(int, char*);

	// Cac ham thanh phan
	int Length();
	void Connect(char*);
	String Reverse();

	// Destructor
	~String();
};

