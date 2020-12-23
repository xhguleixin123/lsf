#include <iostream>
int Isprime(int n);

/*
	素数判断
*/
int main()
{
	int rnt = 0;
	int input;
	std::cin >> input;
	rnt = Isprime(input);
	if (rnt)
	{
		std::cout << input << "是素数" << std::endl;
	}
	else
	{
		std::cout << input << "不是素数" << std::endl;
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

