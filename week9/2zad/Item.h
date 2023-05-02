#ifndef ITEM_H
#define ITEM_H

class Item
{
private:
	int id;
	char* title;
	char* author;
	int dateDay;
	int dateMonth;
	int dateYear;
	void copy(const Item& other);
	void erase();
public:
	Item(int id, const char* title, const char* author, int dateDay, int dateMonth, int dateYear);
	Item(const Item& other);
	Item& operator=(const Item& other);
	~Item();
};

#endif // !ITEM_H


