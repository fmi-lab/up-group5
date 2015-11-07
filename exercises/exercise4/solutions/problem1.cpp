#include <iostream>
#include <cmath>

int main() {

	unsigned n, sum = 0, count = 0;
	bool isPrime;

	do{
		cin >> n;
	} while (n < 0);

	for (unsigned i = 2; i <= n; i++){
		if (n % i == 0){
			isPrime = true;
			for (unsigned j = 2; j <= sqrt(i) && isPrime; j++){
				if (i % j == 0){
					isPrime = false;
				}
			}
			if (isPrime){
				sum += i;
				count++;
			}
		}
	}

	std::cout << sum / (float)count;
	return 0;
}