#include <iostream>

/*
	��дStudent��
	Ҫ��
	��1�������вκ��޲εĹ��췽��
	��2����Ա�����У�name���ַ������飩��Id�����ͣ���score1��score2��score3�����ͣ�
	��3����дSetId��Ա����
	��4�����д�ӡ�����������
	ʾ�������
	0 null 0 0 0
	10 С�� 85 80 78
*/

class Student
{

};

int main()
{
	Student stList[3];
	stList[0] = Student("102", "Yang", 85, 80, 78);
	stList[1] = Student(stList[0]);
	stList[2] = Student();
	stList[1].SetId("101");
	for (int i = 0; i < 3; i++)
	{
		stList[i].print();
	}
	return 0;
}