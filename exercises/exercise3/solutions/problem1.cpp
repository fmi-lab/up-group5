#include <iostream>

int main()
{
    int n = 0;

    do
    {
        std::cout << "n: ";
        std::cin >> n;
    } while (!(n > 0));

    int sum = 0,
        temp = n;

    while(temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    std::cout << std::boolalpha << !(sum % 3) << std::endl;

    return 0;
}
