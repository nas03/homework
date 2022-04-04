#include <iostream>

using namespace std;

int main(){
int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p; 
 /*Lỗi do toán tử delete đã thu hồi vùng bộ nhớ được cấp phát bởi p
 tuy nhiên p2 vẫn chứa địa chỉ đó nên khi sử dụng sẽ gây lỗi*/
 cout << *p2;
 delete p2;

}
