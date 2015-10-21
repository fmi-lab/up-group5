/* ======================================================
 *  Problem 7
 * ------------------------------------------------------
 *
 * Input: sides of a triangle (a, b, c)
 *
 * Output: Check if the triangle is equilateral,
 * isosceles or scalene and right, acute or obtuse
 *
 * ====================================================== */

#include <iostream>

using namespace std;

int main()
{
    double a,
           b,
           c;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    if (a > 0 && b > 0 && c > 0 &&
        a + b > 0 && a + c > 0 && b + c > 0)
    {
        cout << "The triangle is ";

        if (a == b && b == c)
        {
            cout << "equilateral";
        }
        else if (a == b || b == c || a == c)
        {
            cout << "isocales";
        }
        else
        {
            cout << "scalene";
        }

        cout << " and ";

        if (a * a == b * b + c * c ||
            b * b == a * a + c * c ||
            c * c == a * a + b * b)
        {
            cout << "right";
        }
        else if (a * a > b * b + c * c ||
                 b * b > a * a + c * c ||
                 c * c > a * a + b * b)
        {
            cout << "obtuse";
        }
        else
        {
            cout << "acute";
        }

        cout << ".\n";
    }
    else
    {
        cout << a << ", " << b << ", " << c
             << " aren't sides of a triangle.\n";
    }

    return 0;
}

