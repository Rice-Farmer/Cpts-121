#include <iostream>
#include "timeOutput.h"

int main()
{
    using namespace std;
    int hours, minutes;
    cout  << "Enter the number of hours:      ";
    cin    >> hours;
    cout  << "Enter the number of minutes:    ";
    cin    >> minutes;
    formatOutputTime(hours,minutes);
    return 0;
}