#include <iostream>
#include <cmath>

int main() {

	unsigned n, sum = 0, count = 0;
	bool isPrime;

	do{
		cin >> n;
        } while (n < 0);

        for (unsigned i = 2; i <= n; i++) {
          if (n % i == 0) {
            // Check if the divisor is prime
            isPrime = true;
            for (unsigned j = 2; j <= sqrt(i) && isPrime; j++) {
              if (i % j == 0) {
                isPrime = false;
              }
            }
			// If the divisor is not prime check if the sum ot its digits is an
			// even number
            if (!isPrime) {
              unsigned temp = i;
              unsigned sumofDigits = 0;
              while (temp != 0) {
                sumofDigits += temp % 10;
                temp /= 10;
              }
              if (sumofDigits % 2 == 0) {
                sum += i;
                count++;
              }
            }
			else{
				sum += i;
				count++;
			}
          }
        }

        std::cout << sum / (float)count;
		
        return 0;
}