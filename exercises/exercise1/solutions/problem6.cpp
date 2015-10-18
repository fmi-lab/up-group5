/* ======================================================
 *  Problem 6
 * ------------------------------------------------------
 *
 * Input: month and year
 *
 * Output: The number of the days in the month
 *
 * ====================================================== */

#include <iostream>

using namespace std;

int main()
{
    int month,
        year,
        days;

    do
    {
        cout << "Enter month: ";
        cin >> month;
    } while (month < 1 || month > 12);

    cout << "Enter year: ";
    cin >> year;

    bool is_leap = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);

    switch (month)
    {
        case  2 : days = 28 + is_leap;
                  break;

        case  4 :
        case  6 :
        case  9 :
        case 11 : days = 30;
                  break;

        default : days = 31;
    }

    cout << "Days in " << month << "/" << year << " : " << days << endl;

    return 0;
}

