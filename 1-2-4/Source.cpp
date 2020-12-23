#include<iostream>
#include<vector>

// 申明函数，c++链接器会在整个工程力寻找对应的函数主体，一个编译单元（cpp）文件，只能有一个相同形式的函数声明，重复声明会报错
// & 这个符号是 引用类型，就是将地址保存到nums上，函数操作的就是输入的变量，如果不是引用类型，那么函数操作的就是复制到新内存的变量，改变函数内部的不会改变外部的
void BubbleSort(std::vector<int>& nums);
void PrintNums(std::vector<int>& nums);

int main()
{
	int N = 0;
	// vector是动态数组，数组的长度可以改变的，能随意增加和删减元素
	// <int>是指定模板类型，意思就是说这个动态数组的元素类型是整型
	std::vector<int> nums;
	std::cout << "输入数组个数:" << std::endl;
	// cin是将数据流灌输到N上
	std::cin >> N;
	std::cout << "输入数组（空格隔开):\n";
	for (int i = 0; i < N; i++)
	{
		int in = 0;
		std::cin >> in;
		// push_back（in）函数是将in保存到动态数组的末尾
		nums.push_back(in);
	}

	std::cout << "排序前的数组:\n";
	PrintNums(nums);
	BubbleSort(nums);
	std::cout << "排序后的数组:\n";
	PrintNums(nums);

	std::string input = "";
	std::cout << "输入一个数字(输入bye退出):" << std::endl;
	std::cin >> input;
	while (input != "bye")
	{
		nums.push_back(atoi(input.c_str()));
		BubbleSort(nums);
		std::cout << "数组:\n";
		PrintNums(nums);
		std::cout << "输入一个数字(输入bye退出):" << std::endl;
		std::cin >> input;
	}
}


// 这个就是函数定义，函数的主体，链接器会将函数的声明链接到这里
// 冒泡排序
void BubbleSort(std::vector<int>& nums)
{
	for (int i = 0; i < nums.size() - 1; i++)
	{
		for (int j = 0; j < nums.size() - i - 1; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				int tmp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tmp;
			}
		}
	}
}

// 打印数组
void PrintNums(std::vector<int>& nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		std::cout << nums[i];
		if (i != nums.size() - 1)
		{
			std::cout << " ";
		}
	}
	std::cout << std::endl;
}
