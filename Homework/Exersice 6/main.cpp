#include <iostream>
#include "convert.h"

int main()
{
    using namespace std;
    double lightYears, astroUnits;
    cout  << "Enter the number of light years:    ";
    cin    >> lightYears;
    astroUnits = convertLY_AU(lightYears);
    cout  << lightYears << " light years = " << astroUnits << " astronomical units." << endl;;
    return 0;
}