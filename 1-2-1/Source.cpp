#include <iostream>

/*
	顺序打印，逆序打印
*/
int main()
{
	int nums[100] = { 0 };
	int N = 0;
	std::cout << "输入数组长度：" << std::endl;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> nums[i];
	}
	// 顺序打印
	for (int i = 0; i < N; i++)
	{
		std::cout << nums[i];
		if (i != N - 1)
		{
			std::cout << " ";
		}
	}
	// 换行
	std::cout << std::endl;
	// 逆序打印
	for (int i = N - 1; i >= 0; i--)
	{
		std::cout << nums[i];
		if (i != 0)
		{
			std::cout << " ";
		}
	}
}

