/* ======================================================
 *  Problem2
 * ------------------------------------------------------
 *
 * Input: year
 *
 * Output: True/False; if the year is a leap year
 *
 * ====================================================== */

#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter year: ";
    cin >> year;

    bool is_leap = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);

    cout << boolalpha << is_leap << endl;

    return 0;
}

