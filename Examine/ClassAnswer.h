#include <iostream>

/*
	��дStudent��
	Ҫ��
	��1�������вκ��޲εĹ��췽��
	��2����Ա�����У�name���ַ������飩��Id�����ͣ���score1��score2��score3�����ͣ�
	��3����дSetId��Ա����
	��4�����д�ӡ�����������
	ʾ�������
	0 null 0 0 0
	10 С�� 85 80 78
*/

class Student
{
public:

	Student()
		: Id("0"), name("null"), score1(0), score2(0), score3(0)
	{}

	Student(const char* id, const char* n, int s1, int s2, int s3)
		: Id(id), name(n), score1(s1), score2(s2), score3(s3)
	{}

	void print()
	{
		std::cout << Id << " " << name << " " << score1 << " " << score2 << " " << score3 << std::endl;
	}

private:
	std::string Id;
	std::string name;
	int score1, score2, score3;
};

int main()
{
	Student sList[3];
	sList[1] = Student(sList[0]);
}