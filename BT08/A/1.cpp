#include <iostream>
using namespace std;

class Point
{
public:
    Point(int x, int y)
    {
        this -> x = x;
        this -> y = y;
    }
    ~Point();
    
    void print(Point a)
    {
        cout << "("<<a.x <<"," << a.y<<")";
    }
private:
    int x;
    int y;
};