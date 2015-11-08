#include <iostream>

int main()
{
    size_t n = 0;

    do
    {
        std::cout << "n: ";
        std::cin >> n;
    } while (n < 1);

    int result = 1;

    for (size_t i = 2; i <= 2 * n; i += 2)
    {
        result *= i;
    }

    std::cout << "(2n)! = " << result << ", n = " << n << std::endl;

    return 0;
}
