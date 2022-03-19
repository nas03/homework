#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

void rabbitRun(int &pos, int *step)
{
    int stepId = rand() % 9;
    pos += step[stepId];
}
void turtleRun(int &pos, int *step)
{
    int stepId = rand() % 6;
    pos += step[stepId];
}
int main(){
    int fre1[] = {3,3,3,3,3,1,1,1,-6,-6};
    int fre2[] = {0,0,9,9,-12,1,1,1,-2,-2};
    int *turtleFre = &fre1[0];
    int *rabbitFre = &fre2[0];
    int rabbitPos = 0, turtlePos = 0;
    while(true)
    {
        rabbitRun(rabbitPos,rabbitFre);
        turtleRun(turtlePos, turtleFre);
        if (turtlePos < 0) turtlePos = 0;
        if (rabbitPos < 0) rabbitPos = 0;
        cout << "Rabbit: " << rabbitPos <<"     Turtle: " << turtlePos <<endl;
        if (turtlePos >= 70)
        {
            cout << "Turtle win";
            break;
        }
        if (rabbitPos >= 70)
        {
            cout <<"Rabbit win";
            break;
        }

    }
}