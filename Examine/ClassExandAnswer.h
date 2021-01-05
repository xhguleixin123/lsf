#include <iostream>
using namespace std;

/*
	编写黑暗骑士类，暗影猎手是黑暗骑士的派生类
	要求：
	1、黑暗骑士的成员变量有 name, weapon
	2、暗影猎手是英雄，故有技能 skill;
	2、编写两个类的print成员函数
	输出要求：
	:Anonymouse:Sword
	:Arthas:FrostMourne:DeathCoil
*/
class Knight
{
public:
	Knight(string name, string weapon)
		: name(name), weapon(weapon)
	{}
	string name, weapon;
public:
	void print()
	{
		cout << ":" <<name << ":" << weapon;
	}
};

class SilverHand : public Knight
{
public:
	SilverHand(string name, string weapon, string skill)
		: Knight(name ,weapon), skill(skill)
	{}
private:
	string skill;
public:
	void print()
	{
		Knight::print();
		cout << ":" << skill;
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