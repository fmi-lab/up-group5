// Write a recursive function which finds and returns the nth fibonacci number for a given n.
#include <iostream>

//1 1 2 3 5 8 13 21 34 55 ..
//1 2 3 4 5 6 7  8  9  10 ..
unsigned fibN(unsigned n){
	if (n <= 2){
		return 1;
	}
	return fibN(n - 1) + fibN(n - 2);
}

int main()
{
	std::cout << fibN(6);

	return 0;
}