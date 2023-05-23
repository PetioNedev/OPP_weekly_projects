#ifndef BASEPERSON_H
#define BASEPERSON_H
#include <string>
class BasePerson
{
protected:
	std::string name;
	static int personCounter;
	int id;
	BasePerson(const std::string& name);
public:
	virtual ~BasePerson() = default;
	virtual BasePerson* clone() const = 0;
	virtual void displayInfo() = 0;

};



#endif // !BASEPERSON_H
