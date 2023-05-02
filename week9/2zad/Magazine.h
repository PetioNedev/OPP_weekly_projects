#ifndef  MAGAZINE_H
#define  MAGAZINE_H
#include "Item.h"
class Magazine : public Item
{
private:
	int issueNumber;
public:
	Magazine(int issueNumber,int id, const char* title, const char* author, int dateDay, int dateMonth, int dateYear);
};
//Item(int id, const char* title, const char* author, int dateDay, int dateMonth, int dateYear);
#endif // !MAGAZINE_H
