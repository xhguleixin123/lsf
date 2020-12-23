#include <iostream>

/*
	求圆周长、圆面积、圆柱体表面积、圆柱体体积。
*/
int main()
{
	const double PI = 3.1415926;
	double r, h;
	std::cout << "r=";
	std::cin >> r;
	std::cout << "h=";
	std::cin >> h;

	double Ccircle = 2 * r * PI;
	double Scircle = r * r * PI;
	// 周长
	std::cout << "圆周长=" << Ccircle << std::endl;

	// 圆面积
	std::cout << "圆面积=" << Scircle << std::endl;

	// 圆柱体表面积
	std::cout << "圆柱体表面积=" << Ccircle * h + 2 * Scircle << std::endl;

	// 圆柱体体积
	std::cout << "圆柱体体积=" << Scircle * h << std::endl;
}