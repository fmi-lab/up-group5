/* ======================================================
 *  Problem 5
 * ------------------------------------------------------
 *
 * Input: char
 *
 * Output: Check if the char is number, lowercase or
 * uppercase latin letter
 *
 * ====================================================== */

#include <iostream>

using namespace std;

int main()
{
    char c;

    cout << "Enter character: ";
    cin >> c;

    cout << "The character is ";

    if (c >= '0' && c <= '9')
    {
        cout << "a number.";
    }
    else if (c >= 'a' && c <= 'z')
    {
        cout << "a lowercase latin letter.";
    }
    else if (c >= 'A' && c <= 'Z')
    {
        cout << "an uppercase latin letter.";
    }
    else
    {
        cout << "a non-number and non-latin letter symbol.";
    }

    cout << endl;

    return 0;
}

