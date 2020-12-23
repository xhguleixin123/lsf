#include <iostream>

struct ymd
{
	ymd(int y, int m, int d)
		:year(y), month(m), day(d)
	{}
	int year;
	int month;
	int day;
	void print()
	{
		int count = 0;
		int days = 0;
		for (int i = 1; i < month; i++)
		{
			days = 0;
			switch (i)
			{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				days = 30;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				days = 30;
				break;
			case 2:
				if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
					days = 29;
				}
				else {
					days = 28;
				}
			default:
				break;
			}
			count += days;
		}
		std::cout << year << "年" << month << "月" << day << "日是";
		std::cout << "第" << year << "的第" << count << "天。";
	}
};

int main()
{
	ymd date(2020, 10, 2);
	date.print();
}



