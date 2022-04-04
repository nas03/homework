#include <iostream>
using namespace std;

const char* reverse(const char* s)
{
    string str(s);
    char* res = new char[str.size()];
    for (int i = 0;i < str.size();i++)
    {
        res[str.size()-1-i] = str[i]; 
    }
    return res;
}
int main()
{
    cout << reverse("malloc");
}