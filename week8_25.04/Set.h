#ifndef SET_H
#define SET_H
#include <iostream>

template<typename T>
class Set
{
public:
	Set():array(nullptr),size(0)
	{
		
	}

	Set(const Set<T>& other)
	{
		copy(other);
	}

	Set<T>& operator=(const Set<T>& other)
	{
		if (this != &other)
		{
			erase();
			copy(other);
		}
		return *this;
	}

	~Set<T>()
	{
		erase();
	}

	void add(T newObject)
	{
		if (contains(newObject))
		{
			throw std::exception("Error!");
			return;
		}
		
		T* tempArray = new T[size];
		for (size_t i = 0; i < size; i++)
		{
			tempArray[i] = this->array[i];

		}
		delete[] this->array;
		this->size++;
		array = new T[size];
		for (size_t i = 0; i < size-1; i++)
		{
			this->array[i] = tempArray[i];

		}
		this->array[size] = newObject;
		delete[] tempArray;


	}
	bool isEmpty()
	{
		if (size == 0)
		{
			return true;
		}
		return false;
	}
	void print()
	{
		for (size_t i = 0; i < size; i++)
		{
			std::cout<<this->array[i]<<std::endl;
		}
	}
	bool contains(T setObject)
	{
		for (size_t i = 0; i < this->size; i++)
		{
			if (this->array[i] == setObject)
			{
				return true;
			}
		}
		return false;

	}

	Set<T>& operator+(const Set<T>& other)
	{
		Set newArray;
		newArray.size= this->size + other.size;
		newArray.array = new T[newArray.size];
		for (size_t i = 0; i < this->size; i++)
		{
			newArray[i] = this->array[i];
		}
		for (size_t i = this->size; i < other.size; i++)
		{
			newArray[i] = this->array[i];
		}
		return newArray;
	}

	bool operator<(const Set<T>& other)
	{
		for (size_t i = 0; i < this->size; i++)
		{
			if (!(other.contains(this->array[i])))
			{
				return false;
			}

		}
		return true;
		
	}

	bool operator>(const Set<T>& other)
	{
		for (size_t i = 0; i < this->size; i++)
		{
			if (!(this->contains(other.array[i])))
			{
				return false;
			}

		}
		return true;

	}

private:
	T* array;
	int size;

	void copy(const Set<T>& other)
	{
		this->size = other.size;
		this->array = new T[other.size];
		for (int i = 0; i < this->size ; i++)
		{
			this->array[i] = other.array[i];
		}
		
	}

	void erase()
	{
		this->size = 0;
		delete[] this->array;
		
	}

};


#endif // !SET_H


