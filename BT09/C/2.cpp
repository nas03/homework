#include <iostream>
using namespace std;

const char* delete_char(const char* s, char c)
{
    char* res = new char;
    string str(s);
    for (int i = 0; i < str.size();i++)
    {
        if (str[i] != c)
        {
            res[i] = str[i];
        }
    }
    return res;
}
const char* pad_left(const char* s, int n)
{
    string str(s);
    if (str.size() >= n) return s;
    char* res = new char;
    for (int i = n-1; i >= 0; i--)
    {
        if (i >= n - str.size())
        {
            res[i] = s[i-(n-str.size())];
        }
        else
        {
            res[i] = ' ';
        }
    }
    return res;

}
const char* truncate(const char* s, int n)
{
    string str(s);
    if (str.size() <= n) return s;
    char* res = new char;
    for (int i = 0; i < n; i++)
    {
        res[i] = str[i];
    }
    return res;
}
const char* trim_left(const char* s)
{
    string str(s);
    char* res = new char;
    int id = 0;
    for (int i = 0; i < str.size();i++)
    {
        if (str[i] != ' ')
        {
            res[id] = s[i];
            id++;
        }
    }
    return res;
}
const char* trim_right(const char* s)
{
    string str(s);
    char* res = new char;
    int id = 0;
    for (int i = 0; i < str.size();i++)
    {
        if (str[i] == ' ')
        {
            break;
        }
        res[i] = str[i];
    }
    return res;
}
int main()
{
    cout << pad_left("hello", 6) <<endl;
    cout << truncate("Hello",3)<<endl;
    cout << trim_left("   Hello") <<endl;
    cout << trim_right("Hello   ") <<endl;
}