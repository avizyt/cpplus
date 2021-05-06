#include <iostream>

int main()
{
	char c = 'a';
	char* p = &c;
	std::cout << "The value of the dereferemced pointer is: " << *p;

}
