/* ======================================================
 *  Problem 3
 * ------------------------------------------------------
 *
 * Input: sides of a triangle (a, b, c)
 *
 * Output: perimeter, area, h_a, h_b, h_c, l_a, l_b, l_c,
 * m_a m_b, m_c
 *
 * ====================================================== */

#include <iostream>
#include <cmath>

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
        double p = (a + b + c) / 2,
               s = sqrt(p * (p - a) * (p - b) * (p - c));
              
        double h_a = (2 * s) / a,
               h_b = (2 * s) / b,
               h_c = (2 * s) / c;

        cout << endl;

        cout << "h_a = " << h_a << endl
             << "h_b = " << h_b << endl
             << "h_c = " << h_c << endl;

        double m_a = sqrt(2 * b * b + 2 * c * c - a * a) / 2,
               m_b = sqrt(2 * a * a + 2 * c * c - b * b) / 2,
               m_c = sqrt(2 * a * a + 2 * b * b - c * c) / 2;

        cout << endl;

        cout << "m_a = " << m_a << endl
             << "m_b = " << m_b << endl
             << "m_c = " << m_c << endl;

        double l_a = 2 * sqrt(b * c * p * (p - a)) / (b + c),
               l_b = 2 * sqrt(a * c * p * (p - b)) / (a + c),
               l_c = 2 * sqrt(a * b * p * (p - c)) / (a + b);

        cout << endl;

        cout << "l_a = " << l_a << endl
             << "l_b = " << l_b << endl
             << "l_c = " << l_c << endl;
    }
    else
    {
        cout << a << ", " << b << ", " << c
             << " aren't sides of a triangle.\n";
    }

    return 0;
}
