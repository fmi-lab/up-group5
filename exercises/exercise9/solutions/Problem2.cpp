/* Implement Quick Sort through a recursive function which takes as arguments 
 * an array with integers and two indexes(initially - first and last of the array) */
 
#include <iostream>
#define maxSIZE 10000 //< That way we define a constant which we can use in the entire program

void swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}
void quickSort(int *buffer, size_t start, size_t end) {
	int pivot = buffer[start];
	size_t index = start;
	int temp;
	for (size_t i = start + 1; i <= end; i++) {
		if (pivot >= buffer[i]) {
			index++;
			swap(buffer[index], buffer[i]);
		}
	}
	swap(buffer[start], buffer[index]);
	if (index != 0 && index - 1 > start){
		quickSort(buffer, start, index - 1);
	}
	if (index + 1 < end){
		quickSort(buffer, index + 1, end);
	}
}


int main()
{
	int arr[maxSIZE];
	size_t arrSIZE;

	do{
		std::cin >> arrSIZE;
	} while (arrSIZE < 1 || arrSIZE > 10000);

	for (size_t i = 0; i < arrSIZE; i++){
		std::cin >> arr[i];
	}
	///Initially we pass the first and last index of the array
	quickSort(arr, 0, arrSIZE - 1); 
	
	for (size_t i = 0; i < arrSIZE; i++){
		std::cout << arr[i] << ", ";
	}
	
	return 0;
}