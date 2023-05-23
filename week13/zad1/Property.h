#ifndef PROPERTY_H
#define PROPERTY_H

#include <string>
class Property
{

protected:
	std::string owner;
	bool tangible;

public:
	Property(std::string owner, bool tangible);
	std::string getOwner();
	bool isTangible();




};


#endif // !PROPERTY_H
