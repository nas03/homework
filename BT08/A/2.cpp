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
    ~Point()
    {}
    void print(Point a)
    {
        cout << "("<<a.x <<"," << a.y<<")";
    }
private:
    int x;
    int y;
};
void p1(Point* a)
{
    Point *b = a;
    cout << b <<"   ";
}
void p2(Point a)
{
    Point* p = &a;
    cout << p <<"    ";
}
int main()
{
    //Tham tri
    Point a(1,2);
    p2(a);
    Point* temp = &a;
    cout << temp <<endl;
    //Tham bien
    Point* b = new Point(1,2);
    p1(b);
    cout << b;

}