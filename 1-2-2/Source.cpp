#include <iostream>

/*
	交换主对角线对称的元素
*/
int main()
{
	int nums[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	std::cout << "交换之前的矩阵：" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << nums[i][j];
			if (j != 2)
			{
				std::cout << ", ";
			}
			if (j == 2)
			{
				std::cout << std::endl;
			}
		}
	}
	int temp;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 3; j++)
		{
			temp = nums[i][j];
			nums[i][j] = nums[j][i];
			nums[j][i] = temp;
		}
	}
	std::cout << "交换之后的矩阵：" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << nums[i][j];
			if (j != 2)
			{
				std::cout << ", ";
			}
			if (j == 2)
			{
				std::cout << std::endl;
			}
		}
	}

	std::cin.get();
}
