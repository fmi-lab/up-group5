/* Write a recursive function which finds and returns the sum of 
   all the even numbers in a given range [a,b]. */
#include <iostream>

unsigned long sumEven(int a, int b){
	if (a > b){
		return 0;
	}
	if (a % 2 == 0){
		return a + sumEven(a + 1, b);
	}
	return sumEven(a + 1, b);
}

int main()
{
	std::cout << sumEven(1, 10);

	return 0;
}