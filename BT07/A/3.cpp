#include <iostream>
using namespace std;

int *count_even(int* arr, int n)
{   
    int id = 0;
    int *res = new int;
    for (int i = 0 ; i < n; i++)
    {
        if (arr[i] % 2 == 0) res[id++] = arr[i];
    }
    return res;
}

int main()
{
    int arr[] = {1, 2 ,3,4,5,63,45,56,2,423,34};
    int*p = &arr[0];
    p = count_even(p,11);
    for (int i = 0; i < sizeof(*p) + 1; i++)
    {
        cout << p[i] <<" ";
    }
}