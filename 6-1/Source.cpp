#include <iostream>
#include <ostream>

class Vector
{
public:
	Vector()
		: x(0), y(0)
	{}
	Vector(float x, float y)
		: x(x), y(y)
	{}

	float GetX()
	{
		return x;
	}

	float GetY()
	{
		return y;
	}

	Vector& operator+(Vector& other)
	{
		Vector rnt(x + other.GetX(), y + other.GetY());
		return rnt;
	}

	float operator*(Vector& other)
	{
		return (x * other.GetX() + y * other.GetY());
	}

private:
	float x, y;
};

class Matrix
{
public:
	Matrix(int row, int column)
		: row(row), column(column)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				if (i == j)
				{
					mat[i * column + j] = 1.0f;
					continue;
				}
				mat[i * column + j] = 0;
			}
		}
	}
	Matrix(float* value, int row, int column)
		: row(row), column(column)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				mat[i * column + j] = *(value + i*column + j);
			}
		}
	}
	Matrix(Matrix& other)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				mat[i * column + j] = other.GetValue(i, j);
			}
		}
	}
	int row, column;
	float GetValue(int x, int y)
	{
		return mat[x*column + y];
	}
	void SetValue(int x, int y, float value)
	{
		mat[x * column + y] = value;
	}

	Matrix& operator+ (Matrix& other)
	{
		Matrix rnt(3, 3);
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				float value = GetValue(i, j) + other.GetValue(i, j);
				rnt.SetValue(i, j, value);
			}
		}
		return rnt;
	}

	Matrix& operator* (Matrix& other)
	{
		float value = 0.0f;
		Matrix rnt(row, other.column);
		for (int i = 0; i < rnt.row; i++)
		{
			for (int j = 0; j < rnt.column; j++)
			{
				value = 0;
				for (int k = 0; k < column; k++)
				{
					value += (GetValue(i, k) * other.GetValue(k, j));
				}
				rnt.SetValue(i, j, value);
			}
		}
		return rnt;
	}

private:
	float mat[100];
	Matrix();
};

std::ostream& operator<< (std::ostream& os, Vector v)
{
	os << "(" << v.GetX() << ", " << v.GetY() << ")";
	return os;
}

std::ostream& operator<< (std::ostream& os, Matrix& m)
{
	for (int i = 0; i < m.row; i++)
	{
		for (int j = 0; j < m.column; j++)
		{
			os << m.GetValue(i, j) << "  ";
		}
		os << std::endl;
	}
	return os;
}

int main()
{
	Vector v1(5, 1), v2(-3, 10), v3;
	v3 = v1 + v2;
	float multiAnswer = v1 * v2;
	std::cout << v1 << "+" << v2 << " = " << v3 << std::endl;
	std::cout << v1 << "*" << v2 << " = " << multiAnswer << std::endl;


	float value1[] = { 
		1, 2, 3,
		4, 5, 6
	};
	float value2[] = {
		3, 2, 
		1, 4,
		0, 9
	};
	float value3[] = {
		3, 2, 2,
		1, 4, 4,
		0, 9, 3
	};
	float value4[] = {
		3, 2, 2,
		2, 4, 2,
		3, 7, 1
	};
	Matrix mat1(value1, 2, 3);
	Matrix mat2(value2, 3, 2);
	Matrix mat3(2, 2);
	Matrix mat4(value3, 3, 3);
	Matrix mat5(value4 ,3, 3);
	Matrix mat6(3, 3);
	mat3 = mat1 * mat2;
	mat6 = mat4 + mat5;

	std::cout << "mat1 = " << std::endl;
	std::cout << mat1;
	std::cout << "mat2 = " << std::endl;
	std::cout << mat2;

	std::cout << "mat3 = mat1 * mat2" << std::endl;
	std::cout << "mat3 = " << std::endl;
	std::cout << mat3;

	std::cout << "mat4 = " << std::endl;
	std::cout << mat4;
	std::cout << "mat5 = " << std::endl;
	std::cout << mat5;
	std::cout << "mat6 = mat4 * mat5" << std::endl;
	std::cout << "mat6 = " << std::endl;
	std::cout << mat6;
}