#include<iostream>
void getGradeIf(int mark);
void getGradeSwitch(int mark);

int main()
{
	int mark[100] = { 0 };

	int N = 0;

	std::cout << "����ɼ�����(������100��)�� " << std::endl;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cout << "��" << (i + 1) << "�����֣�";
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
		std::cout << "�������󣬳ɼ�����С�ڵ���100" << std::endl;
		return;
	}

	if (mark < 0)
	{
		std::cout << "�������󣬳ɼ�������ڵ���100" << std::endl;
		return;
	}


	if (mark >= 90)
	{
		std::cout << "�ɼ�" << mark << " �ȼ��� A" << std::endl;
	}
	else if (mark >= 80)
	{
		std::cout << "�ɼ�" << mark << " �ȼ��� B" << std::endl;
	}
	else if (mark >= 70)
	{
		std::cout << "�ɼ�" << mark << " �ȼ��� C" << std::endl;
	}
	else if (mark >= 60)
	{
		std::cout << "�ɼ�" << mark << " �ȼ��� D" << std::endl;
	}
	else if (mark < 60)
	{
		std::cout << "�ɼ�" << mark << " �ȼ��� E" << std::endl;
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
		std::cout << "�ɼ�" << mark << " �ȼ��� E" << std::endl;
		break;
	case 6:
		std::cout << "�ɼ�" << mark << " �ȼ��� D" << std::endl;
		break;
	case 7:
		std::cout << "�ɼ�" << mark << " �ȼ��� C" << std::endl;
		break;
	case 8:
		std::cout << "�ɼ�" << mark << " �ȼ��� B" << std::endl;
		break;
	case 9:
		std::cout << "�ɼ�" << mark << " �ȼ��� A" << std::endl;
		break;
	}
}