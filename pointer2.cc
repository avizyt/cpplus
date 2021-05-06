#include <iostream>

int main()
{
	int x = 123;
	int* p = &x;
	*p = 456;
	std::cout << "The value of x is: " << x;
}
