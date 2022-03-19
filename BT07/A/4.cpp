#include <iostream>
using namespace std;
int binarySearch(int *arr, int item, int low, int high)
{
    if (high <= low) return (item > arr[low]) ? (low + 1) : low;
    int mid = low + (high - low) /2;
    if (item == arr[mid]) return mid + 1;
    if (item > arr[mid]) return binarySearch(arr, item, mid+1, high);

    return binarySearch(arr, item, low, mid-1);
}
void insertionSort(int *arr, int n)
{
    int high, pos,item;
    for (int i = 1; i < n; i++)
    {
        item = arr[i];
        high = i -1;
        pos = binarySearch(arr, item, 0 , high);
        while(high >= pos)
        {
            arr[high+1] = arr[high];
            high--;
        }
        arr[pos] = item;
    }
}
int main(){
    int *arr = new int;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    insertionSort(arr,n);
    for ( int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
}