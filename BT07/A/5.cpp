#include <iostream>
using namespace std;

char* weird_string() { 
   char c[] = {'a','g','c'};
   return c; 
}

int main()
{
    cout << *weird_string;
}