#include<iostream> 
#include<string>
using namespace std;

class student
{
public:
    int No;
    string name;
    int score1, score2, score3;
    student()
        : No(0), name("null"), score1(0), score2(0), score3(0)
    {}
    student(int no, const char* n, int s1, int s2, int s3)
        : No(no), name(n), score1(s1), score2(s2), score3(s3)
    {}
};

int main()
{
    student stu = student();
    cout << stu.No << endl << stu.name << endl << stu.score1 << endl << stu.score2 << endl << stu.score3 << endl;

    stu = student(102, "Yang", 85, 80, 78);
    cout << stu.No << endl << stu.name << endl << stu.score1 << endl << stu.score2 << endl << stu.score3 << endl;

    return 0;
}