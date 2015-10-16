/* ======================================================
 *  Problem1
 * ------------------------------------------------------
 *
 * Input: coordinates of a point (x, y)
 *
 * Output: True/False; if point belongs to a circle with
 * center (0, 0) and radius 2
 *
 * ====================================================== */

#include <iostream>

using namespace std;

int main()
{
    double x,
           y, 
           radius = 2,
           center_x = 0,
           center_y = 0;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    cout << "The point is";

    if ((x - center_x) * (x - center_x) + (y - center_y) * (y - center_y) > radius*radius)
    {
        cout << "n't";
    }

    cout << " ";
    cout << "in the circle with center (" << center_x << "," << center_y << ") ";
    cout << "and radius = " << radius << "." << endl;

    return 0;
}
