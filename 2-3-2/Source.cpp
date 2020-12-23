#include<iostream>
void getGradeIf(int mark);
void getGradeSwitch(int mark);

int main()
{
	int mark[100] = { 0 };

	int N = 0;

	std::cout << "输入成绩数量(不超过100个)： " << std::endl;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cout << "第" << (i + 1) << "个数字：";
		std::cin >> mark[i];
	}

	for (int i = 0; i < N; i++)
	{
		//getGradeIf(mark[i]);
		getGradeSwitch(mark[i]);
	}

}


void getGradeIf(int mark)
{

	if (mark > 100)
	{
		std::cout << "输入有误，成绩必须小于等于100" << std::endl;
		return;
	}

	if (mark < 0)
	{
		std::cout << "输入有误，成绩必须大于等于100" << std::endl;
		return;
	}


	if (mark >= 90)
	{
		std::cout << "成绩" << mark << " 等级： A" << std::endl;
	}
	else if (mark >= 80)
	{
		std::cout << "成绩" << mark << " 等级： B" << std::endl;
	}
	else if (mark >= 70)
	{
		std::cout << "成绩" << mark << " 等级： C" << std::endl;
	}
	else if (mark >= 60)
	{
		std::cout << "成绩" << mark << " 等级： D" << std::endl;
	}
	else if (mark < 60)
	{
		std::cout << "成绩" << mark << " 等级： E" << std::endl;
	}
}

void getGradeSwitch(int mark)
{
	int baiwei = (int)mark / 10;
	switch (baiwei)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		std::cout << "成绩" << mark << " 等级： E" << std::endl;
		break;
	case 6:
		std::cout << "成绩" << mark << " 等级： D" << std::endl;
		break;
	case 7:
		std::cout << "成绩" << mark << " 等级： C" << std::endl;
		break;
	case 8:
		std::cout << "成绩" << mark << " 等级： B" << std::endl;
		break;
	case 9:
		std::cout << "成绩" << mark << " 等级： A" << std::endl;
		break;
	}
}