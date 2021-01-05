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
	{
		Id = 0;
		char* p = name;
	}

	void SetId(int id)
	{

	}

private:
	int Id;
	char name[10];
	int score1, socre2, socre3;
};

int main()
{

}