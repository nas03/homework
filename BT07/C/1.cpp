#include <iostream>
#include <stdlib.h>

using namespace std;

int rollDice()
{
    int dice = rand() %6 + 1;
    return dice;
}
int main()
{
    int aPoint = 0, bPoint = 0;
    while(true)
    {
        if (aPoint == bPoint){
              aPoint += rollDice();
              bPoint += rollDice();
        }else if (aPoint < bPoint){
              aPoint += rollDice();
        }else if (bPoint < aPoint){
              bPoint += rollDice();
        }
        cout << "A point: " << aPoint <<"      B point: " <<bPoint <<endl;
        if (aPoint >= 100)
        {
            cout <<"A won";
            break;
        }
        if (bPoint >= 100)
        {
            cout <<"B won";
            break;
        }
    }
   
}