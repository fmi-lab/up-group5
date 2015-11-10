#include <iostream>

int main()
{
    int n = -1,
        min = 0,
        max = 0;

    do
    {
        std::cout << "n: ";
        std::cin >> n;
    } while (n < 0);

    int temp = n;
    max = min = temp % 10;
    temp /= 10;

    while (temp)
    {
        if (temp % 10 > max)
        {
            max = temp % 10;
        }
        else if (temp % 10 < min)
        {
            min = temp % 10;
        }

        temp /= 10;
    }

    std::cout << "min: " << min << std::endl;
    std::cout << "max: " << max << std::endl;

    return 0;
}
