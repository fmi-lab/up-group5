/* ======================================================
 *  Problem 0
 * ------------------------------------------------------
 *
 * Input: coordinates of a point (x, y)
 *
 * Output: the quadrant of the coordinate system the
 * point belongs to; add check if the point is lying on a
 * coordinate axis
 *
 * ====================================================== */
 
#include <iostream>

using namespace std;

int main()
{
    double x, y;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    cout << "The point lies ";

    if (x * y == 0)
    {
        cout << "on a coordinate axis." << endl;
        return 0;
    }

    if (x > 0 && y > 0)
    {
        cout << "in the first quadrant." << endl;
        return 0;
    }

    if (x < 0 && y > 0)
    {
        cout << "in the second quadrant." << endl;
        return 0;
    }   

    if (x < 0 && y < 0)
    {
        cout << "in the third quadrant." << endl;
        return 0;
    }   

    cout << "in the forth quadrant." << endl;
    return 0;
}

