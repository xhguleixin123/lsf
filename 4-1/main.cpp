#include<iostream>
#include <cstdio>

class Student
{
public:
	// ��������̬����
	static void sortArray(Student* students, int n)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < n - 1 -i; j++)
			{
				if ((students+j)->getAverage() < (students + j + 1)->getAverage())
				{
					Student temp = *(students + j);
					*(students + j) = *(students + j + 1);
					*(students + j + 1) = temp;
				}
			}
		}
	}

	// ���������̬����
	static void printArray(Student* students, int n)
	{
		printf("No\tname\tscore1\tscore2\tscore3\taverage\n");
		for (int i = 0; i < n; i++)
		{
			(students + i)->print();
		}
	}

	// �޲ι��캯��
	Student()
		: No(0), score1(0), score2(0), score3(0), average(0)
	{
	}

	// �вι��캯��
	Student(int no,const char* Name, int s1, int s2, int s3)
		: No(no), score1(s1), score2(s2), score3(s3), average(((float)s1+(float)s2+(float)s3)/3)
	{
		int i = 0;
		while (*(Name+i) != '\0')
		{
			name[i] = *(Name + i);
			i++;
		}
	}

	// ��ȿ�������
	Student(const Student& other)
	{
		No = other.No;
		score1 = other.score1;
		score2 = other.score2;
		score3 = other.score3;
		average = other.average;
		int i = 0;
		// Ĭ�ϵĿ�������ֻ�ǿ���name�ĵ�ַ
		// ��ȿ����������µĵ�ַ
		while (*(other.name+i)!='\0')
		{
			name[i] = *(other.name + i);
			i++;
		}
	}

	// ��������
	~Student()
	{
		std::cout << "����ѧ��" << name << std::endl;
	}

	// �������
	void print()
	{
		std::cout << No << "\t" << name << "\t" << score1 << "\t" << score2 << "\t" << score3 << "\t";
		printf("%.2f\n", average);
	}

	// ��ȡƽ��ֵ����
	inline float getAverage() { return average; }

private:
	int No;
	char name[10] = "����";
	int score1, score2, score3;
	float average;
};

int main()
{
	Student students[5];
	// ���Կ�������
	std::cout << "���Կ�������" << std::endl;
	Student testCopy(Student(101, "Zhou", 93, 89, 87));
	testCopy.print();
	std::cout << "------------------------------------------------" << std::endl;
	students[0] = Student(101, "Zhou", 93, 89, 87);
	students[1] = Student(102, "Yang", 85, 80, 78);
	students[2] = Student(103, "Chen", 77, 70, 83);
	students[3] = Student(104, "Qian", 70, 67, 60);
	students[4] = Student(105, "Li", 72, 70, 69);
	Student::sortArray(students, 5);
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "�������" << std::endl;
	Student::printArray(students, 5);
	std::cout << "------------------------------------------------" << std::endl;
}