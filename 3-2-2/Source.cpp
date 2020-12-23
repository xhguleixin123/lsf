#include<iostream>
struct Student
{
	int ID;
	char name[100];
	int score[3];
	void print()
	{
		std::cout << ID << "\t" << name << "\t";
		std::cout << score[0] << "\t" << score[1] << "\t" << score[2] << "\t" << "------" << std::endl;
	}
	float GetAverage()
	{
		float sum = 0;
		float average = 0;
		for (int i = 0; i < 3; i++)
		{
			sum += score[i];
		}
		average = sum / 3;
		return average;
	}
};

int main()
{
	Student students[5];
	students[0] = { 101, "Zhou", {93, 89, 87} };
	students[1] = { 102, "Yang", {85, 80, 78} };
	students[2] = { 103, "Chen", {77, 70, 83} };
	students[3] = { 104, "Qian", {70, 67, 60} };
	students[4] = { 105, "Li", {72, 70, 69} };

	std::cout << "No\tName\tscore1\tscore2\tscore3\taverage" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		students[i].print();
	}
}