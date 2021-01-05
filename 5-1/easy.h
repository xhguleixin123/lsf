#include<iostream>

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
			std::cout << "ѧ��";
			break;
		case Identity::Teacher:
			std::cout << "��ʦ";
			break;
		default:
			break;
		}
	}
protected:
	Client() {}
	// ������ʵ����������
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
	Identity GetIdentity() const override
	{
		return Identity::Teacher;
	}
};

class Student : public Client
{
public:
	Student(const char* name)
		: Client(name) {}


public:
	Identity GetIdentity() const override
	{
		return Identity::Student;
	}
};

void print(Client& client)
{
	client.printName();
	std::cout << "������ǣ�";
	client.PrintCategory();
	std::cout << std::endl;
}

int main()
{
	Student student("С��");
	Teacher teacher("����ʦ");
	print(student);
	print(teacher);
}

