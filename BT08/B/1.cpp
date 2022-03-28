#include <iostream>
#include <string.h>
using namespace std;

struct String
{
    int n;
    char* str = new char;
    String(const char* s)
    {
        string temp = s;
        n = temp.size();
        strcpy(str,s);
    }
    ~String()
    {}
    void print()
    {
        string s(str);
        cout << s<<endl;
    }
    void append(const char* s)
    {
        string tmp1 = s;
        string tmp2 = str;
        tmp2 += tmp1;
        strcpy(str,tmp2.c_str());
    }
};

int main()
{
    String a("Hello");
    a.print();
    a.append(" bro!");
    a.print();
}