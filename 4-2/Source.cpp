#include <iostream>
#include <math.h>
/// <summary>
/// 复数类
/// </summary>
class ComplexNum
{
public:
	// 有参构造函数
	ComplexNum(double realPart, double imaginaryPart)
		:realPart(realPart), imaginaryPart(imaginaryPart)
	{}

	// 无参构造函数
	ComplexNum()
		:realPart(0), imaginaryPart(0)
	{}

	// 析构函数
	~ComplexNum()
	{
		std::cout << "析构虚数 ";
		print();
	}

	// 拷贝函数
	ComplexNum(ComplexNum& other)
	{
		realPart = other.realPart;
		imaginaryPart = other.imaginaryPart;
	}

	// 输出函数
	void print()
	{
		if (imaginaryPart)
		{
			std::cout << realPart << " + " << imaginaryPart << "i" << std::endl;
		}
		else
		{
			std::cout << realPart << std::endl;
		}
	}
	
	// 加法函数
	void Add(ComplexNum& c)
	{
		double r, i;
		realPart += c.realPart;
		imaginaryPart += c.imaginaryPart;
	}

	// 重写加法操作符
	ComplexNum& operator+(const ComplexNum& c)
	{
		ComplexNum rnt;
		rnt.realPart = realPart + c.realPart;
		rnt.imaginaryPart = imaginaryPart + c.imaginaryPart;
		return rnt;
	}

	// 求模函数
	double GetLength()
	{
		double rnt = sqrt((realPart + imaginaryPart));
		return rnt;
	}

	// Get函数
	inline double GetReal() const { return realPart; }
	inline double GetImaginary() const { return imaginaryPart; }

private:
	// 成员变量
	double realPart;
	double imaginaryPart;
};

std::ostream& operator<< (std::ostream& os, const ComplexNum& c)
{
	if (c.GetImaginary()!=0)
	{
		os << c.GetReal() << " + " << c.GetImaginary() << "i\n";
	}
	else
	{
		os << c.GetReal() << std::endl;
	}
	return os;
}


int main()
{
	// 声明变量
	ComplexNum c1(1.0, 2.0);
	ComplexNum c2(3.0, 0.0);
	ComplexNum c3;
	std::cout << "c1 = " << c1;
	std::cout << "c2 = " << c2;
	std::cout << "c3 = " << c3;

	std::cout << "输出函数测试: " << std::endl;
	std::cout << "c1 = ";
	c1.print();
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "流操作符重写测试: " << std::endl;
	std::cout << "c1 = " << c1;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "加法函数测试(c1 + c2): " << std::endl;
	c1.Add(c2);
	std::cout << c1;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "重新输出" << std::endl;
	std::cout << "c1 = " << c1;
	std::cout << "c2 = " << c2;
	std::cout << "c3 = " << c3;
	std::cout << "加法操作符重写测试(c1 + c2): " << std::endl;
	c3 = c1 + c2;
	std::cout << "c3 = ";
	std::cout << c3;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "c1模长为：" << c1.GetLength() << std::endl;
}