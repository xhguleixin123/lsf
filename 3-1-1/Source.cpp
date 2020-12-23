#include <iostream>

int main()
{
	int list[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		std::cin >> list[i];
	}
	for (int i = 9; i >= 0; i--)
	{
		std::cout << *(list + i);
		if (i != 0)
		{
			std::cout << " ";
		}
	}
	std::cout << std::endl;
}

