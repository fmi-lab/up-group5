/* ======================================================
 *  Problem 4
 * ------------------------------------------------------
 *
 * Input: a, b, c
 *
 * Output: Real roots of ax2 + bx + c = 0
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

    cout << endl;

    double discriminant = b * b - 4 * a * c;

    if (a != 0 && discriminant >= 0)
    {
        double x_1 = (-b + sqrt(discriminant)) / (2 * a),
               x_2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "x_1 = " << x_1 << endl
             << "x_2 = " << x_2 << endl;
    }
    else
    {
        cout << "No real roots" << endl;
    }

    return 0;
}

