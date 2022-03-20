#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string a,b,select;
    int cnt = 0,find;
    cin >> a >> b;
   for (int i = 0; i < b.size()-2;i++)
   {
        select ="";
        for (int j = 0; j < 3; j++) select +=b[i+j];
        cout << "select: " <<select << endl;
        find = strcmp(a.c_str(), select.c_str());
        cout << "find: " << find <<endl;
        if (find == 0) cnt++;
        
   }
   cout << cnt;
}