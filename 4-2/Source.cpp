#include <iostream>
#include <math.h>
/// <summary>
/// ������
/// </summary>
class ComplexNum
{
public:
	// �вι��캯��
	ComplexNum(double realPart, double imaginaryPart)
		:realPart(realPart), imaginaryPart(imaginaryPart)
	{}

	// �޲ι��캯��
	ComplexNum()
		:realPart(0), imaginaryPart(0)
	{}

	// ��������
	~ComplexNum()
	{
		std::cout << "�������� ";
		print();
	}

	// ��������
	ComplexNum(ComplexNum& other)
	{
		realPart = other.realPart;
		imaginaryPart = other.imaginaryPart;
	}

	// �������
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
	
	// �ӷ�����
	void Add(ComplexNum& c)
	{
		double r, i;
		realPart += c.realPart;
		imaginaryPart += c.imaginaryPart;
	}

	// ��д�ӷ�������
	ComplexNum& operator+(const ComplexNum& c)
	{
		ComplexNum rnt;
		rnt.realPart = realPart + c.realPart;
		rnt.imaginaryPart = imaginaryPart + c.imaginaryPart;
		return rnt;
	}

	// ��ģ����
	double GetLength()
	{
		double rnt = sqrt((realPart + imaginaryPart));
		return rnt;
	}

	// Get����
	inline double GetReal() const { return realPart; }
	inline double GetImaginary() const { return imaginaryPart; }

private:
	// ��Ա����
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
	// ��������
	ComplexNum c1(1.0, 2.0);
	ComplexNum c2(3.0, 0.0);
	ComplexNum c3;
	std::cout << "c1 = " << c1;
	std::cout << "c2 = " << c2;
	std::cout << "c3 = " << c3;

	std::cout << "�����������: " << std::endl;
	std::cout << "c1 = ";
	c1.print();
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "����������д����: " << std::endl;
	std::cout << "c1 = " << c1;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "�ӷ���������(c1 + c2): " << std::endl;
	c1.Add(c2);
	std::cout << c1;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "�������" << std::endl;
	std::cout << "c1 = " << c1;
	std::cout << "c2 = " << c2;
	std::cout << "c3 = " << c3;
	std::cout << "�ӷ���������д����(c1 + c2): " << std::endl;
	c3 = c1 + c2;
	std::cout << "c3 = ";
	std::cout << c3;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "c1ģ��Ϊ��" << c1.GetLength() << std::endl;
}