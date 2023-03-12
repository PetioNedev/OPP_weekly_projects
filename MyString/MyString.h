#ifndef MYSTRING_H
#define	MYSTRING_H

class MyString
{
public:

	MyString();
	~MyString();
	MyString(const char* str);  //- конструктор, който инициализира обекта чрез с - низ
	MyString(const MyString& other);
	MyString& operator=(const MyString& other);

	int length(const char* str); //- връща дължината на низа
	char& at(unsigned indx);// -дава достъп до символа на индекс indx.Ако няма такъв индекс, метода да хвърли грешка.
	int find(char c, unsigned startPos = 0);// -връща първия индекс, на който се намира символа с, започвайки от startPos нататък.Ако такъвсимвол няма, метода да върне - 1.
	bool empty();// -връща дали низа е празен.
	MyString substr(unsigned pos = 0, unsigned n = 0);// -връща подниза започващ на индекс pos и имащ дължина n символа.Ако няма индекс pos, метода да хвърли грешка.Ако pos + n > length(), да се върне подниза започващ от pos и стигащ до края на низа.
	void append(const MyString& str);// -долепва низа str в края.
	void print();// -отпечатва низа на екрана

private:
	int size;
	char* str;
	void copy(const MyString& other);
	void erase();
};

#endif // !MYSTRING_H
