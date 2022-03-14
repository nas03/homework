#include <iostream>
using namespace std;

int main(){
    double val;
    cin >> val;
    int a = (int)(val);
    if (val - a <= 0.5) cout << a;
    else cout << a+1;

}