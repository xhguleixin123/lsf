#include <iostream>

int GetFactorial(int n);
/*
	�׳�
*/
int main()
{
	int input;
	std::cin >> input;
	int output = GetFactorial(input);
	std::cout << input << "�Ľ׳�Ϊ��" << output << std::endl;
}

int GetFactorial(int n)
{
	int rnt = 1;
	while (n >= 1)
	{
		rnt *= n;
		n--;
	}
	return rnt;
}