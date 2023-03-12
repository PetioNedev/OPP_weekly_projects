#ifndef MYSTRING_H
#define	MYSTRING_H

class MyString
{
public:

	MyString();
	~MyString();
	MyString(const char* str);  //- �����������, ����� ������������ ������ ���� � - ���
	MyString(const MyString& other);
	MyString& operator=(const MyString& other);

	int length(const char* str); //- ����� ��������� �� ����
	char& at(unsigned indx);// -���� ������ �� ������� �� ������ indx.��� ���� ����� ������, ������ �� ������ ������.
	int find(char c, unsigned startPos = 0);// -����� ������ ������, �� ����� �� ������ ������� �, ���������� �� startPos �������.��� ����������� ����, ������ �� ����� - 1.
	bool empty();// -����� ���� ���� � ������.
	MyString substr(unsigned pos = 0, unsigned n = 0);// -����� ������� �������� �� ������ pos � ���� ������� n �������.��� ���� ������ pos, ������ �� ������ ������.��� pos + n > length(), �� �� ����� ������� �������� �� pos � ������ �� ���� �� ����.
	void append(const MyString& str);// -������� ���� str � ����.
	void print();// -��������� ���� �� ������

private:
	int size;
	char* str;
	void copy(const MyString& other);
	void erase();
};

#endif // !MYSTRING_H
