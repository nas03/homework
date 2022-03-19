#include <iostream>

using namespace std;
void truyenMang(int *arr)
{
    for (int i = 0; i < sizeof(*arr)+1;i++)
    {
        cout << arr[i] <<" ";
    }
}
int main()
{
    int *p = new int;
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }
    truyenMang(p);
}