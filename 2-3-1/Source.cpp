#include <iostream>

/*
	���������ֵ
*/
int main()
{
	int nums[3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		std::cin >> nums[i];
	}
	int maxNum = 0;
	for (int i = 0; i < 3; i++)
	{
		if (nums[i] > maxNum)
		{
			maxNum = nums[i];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << nums[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "���ֵΪ��" << maxNum << std::endl;
}