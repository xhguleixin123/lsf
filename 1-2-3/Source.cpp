#include <iostream>
int GetUpperLetterNum(const char* s);
int GetLowerLetterNum(const char* s);
int GetNNum(const char* s);
int GetSpaceNum(const char* s);
int GetCommaNum(const char* s);
/*
	统计字符
*/
int main()
{
	const char* s = "C is a general purpose,procedural,imperative computer  programming" \
		"language developed in 1972 by Dennis Ritchie at the Bell Telephone Laboratories for use with"\
		"the Unix operating system.";
	int UpperLetterNum = GetUpperLetterNum(s);
	int LowerLetterNum = GetLowerLetterNum(s);
	int NNum = GetNNum(s);
	int SpaceNum = GetSpaceNum(s);
	int CommaNum = GetCommaNum(s);
	std::cout << "大写字母数：" << UpperLetterNum << std::endl;
	std::cout << "小写字母数：" << LowerLetterNum << std::endl;
	std::cout << "数字个数：" << NNum << std::endl;
	std::cout << "空格数：" << SpaceNum << std::endl;
	std::cout << "逗号数：" << CommaNum << std::endl;
}

int GetUpperLetterNum(const char* s)
{
	int i = 0;
	int num = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'A' && *(s + i) <= 'Z')
		{
			num++;
		}
		i++;
	}
	return num;
}

int GetLowerLetterNum(const char* s)
{
	int i = 0;
	int num = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			num++;
		}
		i++;
	}
	return num;
}

int GetNNum(const char* s)
{
	int i = 0;
	int num = 0;
	while (*(s + i))
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			num++;
		}
		i++;
	}
	return num;
}

int GetSpaceNum(const char* s)
{
	int i = 0;
	int num = 0;
	while (*(s + i))
	{
		if (*(s + i) == ' ')
		{
			num++;
		}
		i++;
	}
	return num;
}

int GetCommaNum(const char* s)
{
	int i = 0;
	int num = 0;
	while (*(s + i))
	{
		if (*(s + i) == ',')
		{
			num++;
		}
		i++;
	}
	return num;
}