#include <iostream>
int sum(int x, int y);

int main()
{
	// ��̬����
	int x, y;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << std::endl;
	std::cout << "y = ";
	std::cin >> y;
	std::cout << "��̬����" << std::endl;
	std::cout << x << " + " << y << '=' << sum(x, y) << std::endl;

	// ��̬����
	std::cout << "��̬����" << std::endl;
	std::cout << "10 + 1 = " << sum(10, 1) << std::endl;
}

int sum(int x, int y)
{
	return x + y;
}