#include <iostream>
void swap(int* a, int& b);

int main()
{
	int a = 0;
	int b = 2;
	std::cout << "a = " << a << ", b = " << b;
	std::cout << std::endl;
	swap(&a, b);
	std::cout << "a = " << a << ", b = " << b;
}

void swap(int* a, int& b)
{
	int temp = 0;
	temp = *a;
	*a = b;
	b = temp;
}


