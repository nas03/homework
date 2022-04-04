#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = new int;
    p = &a;
    *p = 10;
    delete p;
    cerr << p <<"    " <<*p ;
    /*do khởi tạo biến a, ta đã dùng pp cấp phát tĩnh nên vùng nhớ không thể bị xoá(thu hồi) nên khi trỏ p tới a
    và sử dụng toán tử delete -> gây lỗi do không thể thu hồi*/
}