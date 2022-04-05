#pragma once
class String
{
public:
	String();
	~String();
	void Run();
private:
	void delList(char[], int , int , char[]);
	int permut(char[], int, int);
	void append(char[], char[]);
};

