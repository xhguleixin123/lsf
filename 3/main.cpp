#include<iostream>

class Student
{
public:
	Student()
		: No(0),name(" "), score1(0), score2(0), score3(0), average(0)
	{}
	Student(int no,std::string name, int s1, int s2, int s3)
		: No(no),name(name), score1(s1), score2(s2), score3(s3), average(((float)s1+(float)s2+(float)s3)/3)
	{}
	void print()
	{
		printf("%d\t%s\t%d\t%d\t%d\t%.2f", No, name, score1, score2, score3);
	}

private:
	int No;
	std::string name;
	int score1, score2, score3;
	float average;
};