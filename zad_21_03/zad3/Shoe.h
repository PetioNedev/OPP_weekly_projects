#ifndef SHOE_H
#define SHOE_H

class Shoe
{
private:
	std::string brand;
	std::string model;
	double price;
	double rating;
	int count;
	int maxCount;
	Shoe* models;
public:
	Shoe();
	Shoe(int maxCount);
	Shoe(const Shoe& other);
	Shoe& operator =(const Shoe& other);
	~Shoe();

	//void copy();
	//void erase();




};


#endif // !SHOE_H

