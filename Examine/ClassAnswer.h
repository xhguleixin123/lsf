#include <iostream>

/*
	编写Student类
	要求：
	（1）具有有参和无参的构造方法
	（2）成员变量有，name（字符串数组），Id（整型），score1，score2，score3（整型）
	（3）编写SetId成员函数
	（4）具有打印函数输出数据
	示例输出：
	0 null 0 0 0
	10 小明 85 80 78
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