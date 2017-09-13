#include <iostream>
#include <cstdlib>
#include "LeapYear.h"

using namespace std;

/** \brief
 *
 * \param argc int
 * \param argv[] char*
 * \return 1 if leap year or 0 if not leap year
 *
 */
int main(int argc, char* argv[])
{
    int Year;

    for (int i = 1; i < argc; i++)
        if ((Year = atoi(argv[i])) != 0)
        {
            if (IsLeapYear(Year))
            {
                cout << Year << " is a leap year" << endl;
                return 1;
            }
            else
                cout << Year << " is a not leap year" << endl;
        }
        else
        {
            cout << argv[i] << " is a not year" << endl;
        }
    return 0;
}
