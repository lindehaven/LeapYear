#include "LeapYear.h"

namespace
{

/** \brief
 *
 * \param Year int
 * \return bool
 *
 */
bool IsDivisableBy400(int Year)
{
    return (Year%400) == 0;
}

/** \brief
 *
 * \param Year int
 * \return bool
 *
 */
bool IsDivisableBy100(int Year)
{
    return (Year%100) == 0;
}

/** \brief
 *
 * \param Year int
 * \return bool
 *
 */
bool IsDivisableBy4(int Year)
{
    return (Year%4) == 0;
}

}

/** \brief
 *
 * \param Year int
 * \return bool
 *
 */
bool IsLeapYear(int Year)
{
    const bool LeapYear = IsDivisableBy400(Year) || (IsDivisableBy4(Year) && !IsDivisableBy100(Year));
    return LeapYear;
}
