#include <iostream>
/*
���밸��
5
2
3
4
1
���
1 2 3 4 6
*/
void Sort(int* input)
{
	for (int i = 0; i < 5 - 1; i++)
	{
		for (int j = 0; j < 5 - 1 - i; j++)
		{
			if (*(input+j) > * (input + j + 1))
			{
				int temp = *(input + j);
				*(input + j) = *(input + j + 1);
				*(input + j + 1) = temp;
			}
		}
	}
}


int main()
{
	int input[5];
	// ����
	for (int i = 0; i < 5; i++)
	{
		std::cin >> input[i];
	}
	// ����
	Sort(input);
	// ���
	for (int i = 0; i < 5; i++)
	{
		std::cout << input[i] << " ";
	}
}
