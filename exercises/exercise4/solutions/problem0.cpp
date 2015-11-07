#include <iostream>
#include <cmath>

int main() {
	unsigned n;
	bool isPrime;
	do{
		cin >> n;
	} while (n < 0);

	for (unsigned i = 2; i < n; i++){
		isPrime = true;
		for (unsigned j = 2; j <= sqrt(i) && isPrime; j++){
			if (i % j == 0){
				isPrime = false;
			}
		}
		if (isPrime){
			std::cout << i <<", ";
		}
	}
	return 0;
}