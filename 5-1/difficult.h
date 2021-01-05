#include<iostream>

#define CLIENT_IDENTITY(id) Identity GetIdentity() const override \
	{ \
		return Identity::id; \
	}

enum class Identity
{
	None = 0,
	Student,
	Teacher
};

class Client
{
public:
	void printName()
	{
		std::cout << userName;
	}
	virtual Identity GetIdentity() const = 0;
	void PrintCategory() {
		switch (GetIdentity())
		{
		case Identity::Student:
			std::cout << "学生";
			break;
		case Identity::Teacher:
			std::cout << "老师";
			break;
		default:
			break;
		}
	}
protected:
	Client() {}
	// 不允许实例化抽象类
	Client(const char* name)
	{
		char* p = userName;
		while (*p++ = *name++);
	}
protected:
	char userName[10];
};


class Teacher : public Client
{
public:
	Teacher(const char* name)
		: Client(name) {}
public:
	CLIENT_IDENTITY(Teacher)
};


class Student : public Client
{
public:
	Student(const char* name)
		: Client(name) {}
public:
	CLIENT_IDENTITY(Student)
};

int main()
{
	Student student("小明");
	Teacher teacher("张老师");
	student.printName();
	std::cout << "的身份是：";
	student.PrintCategory();
	std::cout << std::endl;
	teacher.printName();
	std::cout << "的身份是：";
	teacher.PrintCategory();

}