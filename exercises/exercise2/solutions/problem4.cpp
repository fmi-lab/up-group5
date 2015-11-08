#include <iostream>

int main()
{
    size_t n = 0;

    do
    {
        std::cout << "n: ";
        std::cin >> n;
    } while (n < 1);

    double sum = 1,
           sign = 1 - 2 * (n % 2);

    size_t i = n;

    while (i >= 2)
    {
        sign = -sign;
        sum += sign / i;
        i--;
    }
    
    std::cout << "sum = " << sum << std::endl;

    return 0;
}
