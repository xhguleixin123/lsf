/*
ÊäÈë°¸Àı
5 2 4 3 1
Êä³ö
1 2 3 4 5
*/
#include <iostream>
using namespace std;
void sort(int input[])
{
	for (int i = 0;i < 5 - 1;i++)
	{
		for (int j = 0;j < 5 - 1 - i;j++)
		{
			if (input[j] > input[j + 1])
			{
				int temp = input[j];
				input[j] = input[j + 1];
				input[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int input[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> input[i];
	}
	sort(input);
	for (int i = 0; i < 5; i++)
	{
		cout << input[i] << " ";
	}

}