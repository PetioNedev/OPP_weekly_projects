#ifndef RELATIONELEMENT_H
#define RELATIONELEMENT_H

#include <string>
#include <iostream>

template <typename T>
class RelationElement
{
private:
	T subject;
	T objects;
	std::string relation;
	RelationElement(T subject, T objects, std::string relation) : subject(subject), objects(objects), relation(relation)
	{

	}
public:
	void print()
	{
		std::cout << this->subject<<" "<<this->relation <<" "<<this->objects<< std::endl;
	}
	

		
};

template <>
class RelationElement<int>
{
private:
	int subject;
	int objects;
	std::string relation;
public:
	RelationElement(int subject, int objects, std::string relation): subject(subject), objects(objects), relation(relation)
	{

	}
	void print()
	{
		std::cout << this->relation << std::endl;
	}
	RelationElement operator*(const RelationElement& other)
	{
		if (this->objects == other.subject)
		{
			RelationElement r(0,0,"");
			r.subject = this->subject;
			r.objects = other.objects;
			r.relation = std::to_string(this->subject) + this->relation + std::to_string(this->objects) + ", which is" + other.relation;
			return r;
		}
		return *this;
		
	}


};


#endif // !RELATIONELEMENT_H

