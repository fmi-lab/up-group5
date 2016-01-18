/* Implement Merge Sort through a recursive function which takes as arguments 
 * an array with integers and two indexes(initially - first and last of the array */
 
#include <iostream>
#define maxSIZE 10000 //< That way we define a constant which we can use in the entire program


void mergeSort(int* arr, size_t start, size_t end) {
	if (start == end) {
		return;
	}
	int middle = (start + end) / 2;
	mergeSort(arr, start, middle);
	mergeSort(arr, middle + 1, end);
	int temp[maxSIZE];
	size_t left = start, right = middle + 1, tempIndex = 0;

	//Perform the merging procedure
	while (left <= middle && right <= end) {
		if (arr[left] < arr[right]) {
			temp[tempIndex] = arr[left];
			left++;
		}
		else {
			temp[tempIndex] = arr[right];
			right++;
		}
		tempIndex++;
	}

	while (left <= middle){
		temp[tempIndex] = arr[left];
		left++;
		tempIndex++;
	}
	while (right <= end){
		temp[tempIndex] = arr[right];
		right++;
		tempIndex++;
	}
	//After the merging we got the sorted array in temp

	left = start; //< we fix left to be the start of the part we sort now
	size_t i = 0; //< we start from 0 in the temp array

	//Copy the elements merged in the temp array back in the one we sort -> arr
	while (i < tempIndex && left <= end){
		arr[left] = temp[i];
		left++;
		i++;
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
	mergeSort(arr, 0, arrSIZE - 1); 
	
	for (size_t i = 0; i < arrSIZE; i++){
		std::cout << arr[i] << ", ";
	}

	return 0;
}