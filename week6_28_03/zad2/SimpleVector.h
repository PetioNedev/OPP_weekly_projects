#ifndef SIMPLEVECTOR_H
#define	SIMPLEVECTOR_H


class SimpleVector
{
public:
	int data[10];
	int size;
	SimpleVector();
	SimpleVector& operator+(SimpleVector& other);
	SimpleVector& operator-(SimpleVector& other);
	SimpleVector& operator/(int skalar);
	SimpleVector& operator*(int skalar);
	void print();
	void writeBinary();
	void readBinary();
	void writeText();
	void readText();

};
#endif // !SIMPLEVECTOR_H

