#include <iostream>

/*
	˳���ӡ�������ӡ
*/
int main()
{
	int nums[100] = { 0 };
	int N = 0;
	std::cout << "�������鳤�ȣ�" << std::endl;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> nums[i];
	}
	// ˳���ӡ
	for (int i = 0; i < N; i++)
	{
		std::cout << nums[i];
		if (i != N - 1)
		{
			std::cout << " ";
		}
	}
	// ����
	std::cout << std::endl;
	// �����ӡ
	for (int i = N - 1; i >= 0; i--)
	{
		std::cout << nums[i];
		if (i != 0)
		{
			std::cout << " ";
		}
	}
}

