#include <iostream>

/*
	��Բ�ܳ���Բ�����Բ����������Բ���������
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
	// �ܳ�
	std::cout << "Բ�ܳ�=" << Ccircle << std::endl;

	// Բ���
	std::cout << "Բ���=" << Scircle << std::endl;

	// Բ��������
	std::cout << "Բ��������=" << Ccircle * h + 2 * Scircle << std::endl;

	// Բ�������
	std::cout << "Բ�������=" << Scircle * h << std::endl;
}