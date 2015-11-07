#include <iostream>
#include <cmath>

int main() {
	const unsigned maxSIZE = 100;
	int arr[maxSIZE];
	unsigned n;
	
	do{
		std::cout << "Enter the size of the array: ";
		std::cin >> n;
	}while (n < 1 || n > 100);
	
	for (unsigned i = 0; i < n; i++){
		std::cout << "arr[" << i << "] = ";
		std::cin >> arr[i];
	}

	int min = arr[0], max = arr[0];
	for (unsigned i = 1; i < n; i++){
		if (arr[i] < min){
			min = arr[i];
		}
		if (arr[i] > max){
			max = arr[i];
		}
	}

	std::cout << "Min: " << min << "    Max: " << max << std::endl;
	
	return 0;
}