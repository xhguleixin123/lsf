#include <iostream>
using namespace std;

/*
��д������vector����
Ҫ��
1���в��޲εĹ��췽��
2����ӡ����
3����д�Ӳ�����

v1 = (1, 1)
v2 = (3, 4)
v3 = v1 + v2

Ҫ�������
��4, 5��

*/

class Vector
{

};

int main()
{
	Vector v1(1, 1);
	Vector v2(3, 4);
	Vector v3;
	v3 = v1 + v2;
	v3.print();
}