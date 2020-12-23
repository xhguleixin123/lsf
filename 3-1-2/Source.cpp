#include <iostream>
int getStringLength(const char* str)
{
	int i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char str[100];
	std::cout << "输入一个不超过100长度的字符串（不要使用中文）：" << std::endl;
	std::cin >> str;
	std::cout << "字符串长度为：" << getStringLength(str);
}
