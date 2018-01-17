#include <iostream>

void formatOutputTime(int hours, int minutes)
{
    using namespace std;
    if(minutes>=10)
        cout  << "Time:  " << hours  << ":"  << minutes  << endl;
    else
        cout  << "Time:  " << hours  << ":0"  << minutes  << endl;
}