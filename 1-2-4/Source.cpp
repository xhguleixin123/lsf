#include<iostream>
#include<vector>

// ����������c++��������������������Ѱ�Ҷ�Ӧ�ĺ������壬һ�����뵥Ԫ��cpp���ļ���ֻ����һ����ͬ��ʽ�ĺ����������ظ������ᱨ��
// & ��������� �������ͣ����ǽ���ַ���浽nums�ϣ����������ľ�������ı�������������������ͣ���ô���������ľ��Ǹ��Ƶ����ڴ�ı������ı亯���ڲ��Ĳ���ı��ⲿ��
void BubbleSort(std::vector<int>& nums);
void PrintNums(std::vector<int>& nums);

int main()
{
	int N = 0;
	// vector�Ƕ�̬���飬����ĳ��ȿ��Ըı�ģ����������Ӻ�ɾ��Ԫ��
	// <int>��ָ��ģ�����ͣ���˼����˵�����̬�����Ԫ������������
	std::vector<int> nums;
	std::cout << "�����������:" << std::endl;
	// cin�ǽ����������䵽N��
	std::cin >> N;
	std::cout << "�������飨�ո����):\n";
	for (int i = 0; i < N; i++)
	{
		int in = 0;
		std::cin >> in;
		// push_back��in�������ǽ�in���浽��̬�����ĩβ
		nums.push_back(in);
	}

	std::cout << "����ǰ������:\n";
	PrintNums(nums);
	BubbleSort(nums);
	std::cout << "����������:\n";
	PrintNums(nums);

	std::string input = "";
	std::cout << "����һ������(����bye�˳�):" << std::endl;
	std::cin >> input;
	while (input != "bye")
	{
		nums.push_back(atoi(input.c_str()));
		BubbleSort(nums);
		std::cout << "����:\n";
		PrintNums(nums);
		std::cout << "����һ������(����bye�˳�):" << std::endl;
		std::cin >> input;
	}
}


// ������Ǻ������壬���������壬�������Ὣ�������������ӵ�����
// ð������
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

// ��ӡ����
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
