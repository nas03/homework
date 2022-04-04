#include <iostream>
#include <string>

using namespace std;

const char* concat(const char* s1, const char* s2)
{
    string a = string(s1);
    string b = string(s2);
    string c = a + b;
    const char* res = c.c_str();
    return res;
}
int main()
{
    cout << concat("hello", "world");
}