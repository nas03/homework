#include <iostream>
using namespace std;

class Point
{
public:
    int x;
    int y;
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

};
Point mid_point(const Point a, const Point b)
{
    Point res((a.x + b.x)*1.0f/2,(a.y + b.y)*1.0f/2);
    return res ;
}
int main()
{

}