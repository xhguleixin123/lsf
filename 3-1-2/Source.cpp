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
	std::cout << "����һ��������100���ȵ��ַ�������Ҫʹ�����ģ���" << std::endl;
	std::cin >> str;
	std::cout << "�ַ�������Ϊ��" << getStringLength(str);
}
