#include <iostream>

int main()
{
    int n = 0;

    do
    {
        std::cout << "n: ";
        std::cin >> n;
    } while (!(n > 0));

    size_t old_digit = 0;

    do
    {
        std::cout << "old digit: ";
        std::cin >> old_digit;
    }
    while (old_digit < 0 || old_digit > 9);

    size_t new_digit = 0;

    do
    {
        std::cout << "new digit: ";
        std::cin >> new_digit;
    }
    while (new_digit < 0 || new_digit > 9 || new_digit == old_digit);

    size_t length = 0;
    int temp = n;

    while(temp)
    { 
        length++;
        temp /= 10;
    }

    int k = 1;

    for (int i = 1; i <= length; i++)
    { 
        if ((n / k % 10) == old_digit) 
        {
            n = (n / ( k * 10) * 10 + new_digit) * k + n % k;
        } 

        k *= 10;
    }

    std::cout << n << std::endl;
    return 0;
}
