#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{

	int a = 5, b = 16;
	swap(a, b);
	std::cout << a << " " << b;


}

 