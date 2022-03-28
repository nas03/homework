#include <iostream>
using namespace std;

class Point
{
public:
    int x, y;
    Point(int x, int y)
    {
        this -> x = x;
        this -> y = y;
    }
    ~Point()
    {}
    void print(Point a)
    {
        cout << "("<<a.x <<"," << a.y<<")";
    }
};

int main()
{
    Point a(1,2);
    Point *b = &a;
    int* p1 = &(a.x);
    int* p2 = &(a.y);
    cout <<"a: " << b<<endl;
    cout <<"a.x: " << p1<<endl;
    cout <<"a.y: " << p2 <<endl;
    cout << p2 -p1;
    //Dia chi Point = dia chi cua x
    //Dia chi y canh x
}