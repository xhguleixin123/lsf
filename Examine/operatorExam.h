#include <iostream>
using namespace std;

/*
编写向量（vector）类
要求
1、有参无参的构造方法
2、打印函数
3、重写加操作符

v1 = (1, 1)
v2 = (3, 4)
v3 = v1 + v2

要求输出：
（4, 5）

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