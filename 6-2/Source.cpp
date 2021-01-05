#include <iostream>
#include <ostream>

enum class Gender
{
	Female,
	Male
};

enum class Grade
{
	first = 1,
	second,
	third,
	forth,
	other
};

std::ostream& operator<< (std::ostream& os, Gender gender)
{
	if ((int)gender)
	{
		os << "男";
	}
	else
	{
		os << "女";
	}
	return os;
}

std::ostream& operator<< (std::ostream& os, Grade grade)
{
	switch ((int)grade)
	{
	case 1:
		os << "大一";
		break;
	case 2:
		os << "大二";
		break;
	case 3:
		os << "大三";
		break;
	case 4:
		os << "大四";
		break;
	default:
		break;
	}
	return os;
}

class Person
{
public:
	Person()
		: Gender(Gender::Male), height(175.0f), weight(70.0f)
	{
		const char* n = "null";
		char* p = name;
		while (*p++ = *n++);
	}

	Person(const char* n, Gender gender, float height, float weight)
		: Gender(gender), height(height), weight(weight)
	{
		char* p = name;
		while (*p++ = *n++);
	}

	virtual void printClassName()
	{
		std::cout << "Person" << std::endl;
	}

	virtual void printInformation()
	{
		std::cout << "姓名：" << name << std::endl;
		std::cout << "性别：" << Gender << std::endl;
		std::cout << "身高：" << height << "cm" << std::endl;
		std::cout << "体重：" << weight << "kg" << std::endl;
	}
protected:
	char name[10];
	Gender Gender;
	float height;
	float weight;
};


class Student : public Person
{
public:
	Student() 
		: Person(), grade(Grade::first), ID(0)
	{}
	Student(const char* n, ::Gender gender, float height, float weight, ::Grade grade, int id)
		: Person(n, gender, height, weight), grade(grade), ID(id)
	{}

	void printClassName() override
	{
		std::cout << "Student" << std::endl;
	}

	void printInformation() override
	{
		std::cout << "姓名：" << name << std::endl;
		std::cout << "性别：" << Gender << std::endl;
		std::cout << "身高：" << height << "cm" << std::endl;
		std::cout << "体重：" << weight << "kg" << std::endl;
		std::cout << "年级：" << grade << std::endl;
		std::cout << "学号：" << ID << std::endl;
	}

private:
	::Grade grade;
	int ID;
};

class Teacher : public Person
{
public:
	Teacher()
		: Person(), salary(0)
	{}
	Teacher(const char* n, ::Gender gender, float height, float weight, float salary)
		: Person(n, gender, height, weight), salary(salary)
	{}

	void printClassName() override
	{
		std::cout << "Teacher" << std::endl;
	}

	void printInformation() override
	{
		std::cout << "姓名：" << name << std::endl;
		std::cout << "性别：" << Gender << std::endl;
		std::cout << "身高：" << height << "cm" << std::endl;
		std::cout << "体重：" << weight << "kg" << std::endl;
		std::cout << "工资：" << salary << "rmb" << std::endl;
	}

private:
	float salary;
};

int main()
{
	Person p1;
	Person p2("Jack", Gender::Male, 177, 90);
	Person* p3 = new Student();
	Person* p4 = new Student("小明", Gender::Male, 170, 60, Grade::second, 10100);
	Person* p5 = new Teacher();
	Person* p6 = new Teacher("张老师", Gender::Female, 165, 55, 10000);
	p1.printClassName();
	p2.printInformation();
	p3->printInformation();
	p4->printInformation();
	p5->printClassName();
	p5->printInformation();
	p6->printInformation();
	delete p3, p4, p5, p6;
}

