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
           sign = 1;

    for (size_t i = 2; i <= n; i++)
    {
        sign = -sign;
        sum += sign / i;
    }

    std::cout << "sum = " << sum << std::endl;

    return 0;
}
