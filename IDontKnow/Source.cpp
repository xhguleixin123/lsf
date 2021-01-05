#include <iostream>
//matrix 一维矩阵,m 矩阵行数，n矩阵列数
bool PrintMatrix(int *matrix, int m, int n)
{
	return true;
}


int main(void)
{
	int arr[3][3] = { 
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	PrintMatrix((int*)arr, 3, 3);
	return 0;
}