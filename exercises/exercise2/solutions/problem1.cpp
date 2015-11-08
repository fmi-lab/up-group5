#include <iostream>
#include <cmath>

int main() 
{
    double x = 0; 
    size_t n = 0;

    std::cout << "x: ";
    std::cin >> x;

    do
    {
        std::cout << "n: ";
        std::cin >> n;
    } while (n < 1);

    double result = sin(x), 
           sum = result,
           initial = result;

    for (size_t i = 2; i <= n; i++)
    { 
        result *= initial;
        sum += result;
    }

    std::cout << "sum = " << sum << std::endl;

    return 0;
}
