#include <iostream>
using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a'; 
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    /*lệnh cerr này không chạy như mong muốn do delete c đã thu hòi vùng nhớ được cấp phát, do đó a không còn quyền truy cập vào heap -> gây lỗi*/
    cerr << "a after deleting c:" << "-" << a << "-" << endl;

}