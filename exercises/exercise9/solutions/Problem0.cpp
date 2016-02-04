/* Write a recursive function which finds the greatest common divisor of two integer numbers */
#include <iostream>

int gcd(int a, int b){
	if (b == 0){
		return a;
	}
	gcd(b, a%b);
}

// gcd(12, 30) -> gcd(30, 12) -> gcd(12, 6) -> gcd(6,0) -> 6

int main()
{
	std::cout << gcd(12, 30) << std::endl;
	return 0;
}