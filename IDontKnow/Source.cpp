#include <iostream>
using namespace std;

class student
{
private:
    char Id[10];
    char Name[10];
    int score1;
    int score2;
    int score3;
public:
    student()
    {
        Id[0] = '\0';Name[0] = '\0';score1 = 0;score2 = 0;score3 = 0;
    }
    student(const char* id, const char* name, int s1, int s2, int s3)
    {
        char* p = Id;
        while (*p++ = *id++);
        p = Name;
        while (*p++ = *name++);
        score1 = s1;score2 = s2;score3 = s3;
    }
    void setId(const char* id)
    {
        char* p = Id;
        while (*p++ = *id++);
    }
    void print()
    {
        cout << Id << " " << Name << " " << score1 << " " << score2 << " " << score3 << endl;
    }

};

int main()
{
    student stList[3];
    stList[0] = student("102", "Yang", 85, 80, 78);
    stList[1] = student(stList[0]);
    stList[2] = student();
    stList[1].setId("101");
    for (int i = 0; i < 3; i++) {
        stList[i].print();
    }
    return 0;
}