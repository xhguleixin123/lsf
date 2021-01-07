#include<iostream> 
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int a, int b)
    {
        x = a;y = b;
    }
    ~Point()
    {
        cout << "Deconstruct:" << x << "," << y;
    }

};

int main()
{
    int x, y;
    cout << "Please input (x,y):" << endl;
    cin >> x >> y;
    Point p(x, y);
    return 0;
}