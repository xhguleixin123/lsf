#include <iostream>
int Isprime(int n);

/*
	�����ж�
*/
int main()
{
	int rnt = 0;
	int input;
	std::cin >> input;
	rnt = Isprime(input);
	if (rnt)
	{
		std::cout << input << "������" << std::endl;
	}
	else
	{
		std::cout << input << "��������" << std::endl;
	}
}

int Isprime(int n)
{
	if (n <= 0)
	{
		return 0;
	}

	int sqr = int(std::sqrt(n));
	for (int i = 2; i < sqr; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

