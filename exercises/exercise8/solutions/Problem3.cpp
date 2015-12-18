// Write a recursive function which finds and returns the factorial of a given number n
#include <iostream>

unsigned long factorial(unsigned n){
	if (n <= 1){
		return 1;
	}
	return n*factorial(n - 1);
}

int main()
{
	std::cout << factorial(6);

	return 0;
}