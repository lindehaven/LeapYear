#include <iostream>
#include <cstdlib>
#include "LeapYear.h"

using namespace std;

int main(int argc, char* argv[])
{
    int Year;

    for (int i = 1; i < argc; i++)
        if ((Year = atoi(argv[i])) != 0)
        {
            if (IsLeapYear(Year))
                cout << Year << " is a leap year" << endl;
            else
                cout << Year << " is a not leap year" << endl;
        }
        else
        {
            cout << argv[i] << " is a not year" << endl;
        }
    return 0;
}
