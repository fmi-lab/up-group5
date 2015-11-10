#include <iostream>

int main()
{
    int a = 0,
        b = 0;

    do
    {
        std::cout << "a: ";
        std::cin >> a;
    } while (a < 1);

    do
    {
        std::cout << "b: ";
        std::cin >> b;
    } while (b < 1);

    std::cout << "gcd(" << a << ", " << b << ") = ";

    while(a != b)
    {
        if(a > b)
            a = a-b; 
        else 
            b = b-a;
    }

    std::cout << a << std::endl;

    return 0;
}
