#include <iostream>
using namespace std;

/*
	��д�ڰ���ʿ�࣬��Ӱ�����Ǻڰ���ʿ��������
	Ҫ��
	1���ڰ���ʿ�ĳ�Ա������ name, weapon
	2����Ӱ������Ӣ�ۣ����м��� skill;
	2����д�������print��Ա����
	���Ҫ��
	:Anonymouse:Sword
	:Arthas:FrostMourne:DeathCoil
*/
class Knight
{
public:
	void print()
	{

	}
};

class SilverHand : public Knight
{
public:
	void print()
	{
		Knight::print();
	}
};

int main()
{
	Knight k1("Anonymouse", "Sword");
	k1.print();
	cout << endl;
	SilverHand s1("Arthas", "FrostMourne", "DeathCoil");
	s1.print();
	return 0;
}