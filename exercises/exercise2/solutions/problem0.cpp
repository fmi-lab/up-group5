#include <iostream>

int main() 
{
    double x = 0,
           result = 1;

    std::cout << "x: ";
    std::cin >> x;

    for (size_t i = 2; i <= 11; i++)
    {
        result = result * x + i;
    }

    std::cout << "result: " << result << std::endl;

    return 0;
}
