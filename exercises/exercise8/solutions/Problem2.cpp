//
#include <iostream>
using namespace std;

//Simple implementation of the insertion sorting algorithm
//Explanation: http://www.algolist.net/Algorithms/Sorting/Insertion_sort
void sortInsertion(int *start, int *end) {
  unsigned i = 0;
  while (start + i <= end){
	  unsigned j = i;
	  while (j > 0 && start[j] < start[j - 1]) {
		  start[j] += start[j - 1];
		  start[j - 1] = start[j] - start[j - 1];
		  start[j] = start[j] - start[j - 1];
		  j--;
	  }
	  i++;
  }
}

int main()
{
	const unsigned n = 11;
	int arr[n] = { 1, -3, 5, 2, 10, 20, 6, 7, -20, 199, 4 };

	// we pass a pointer to the beginning of the array and one to the end of the array
	sortInsertion(arr, arr+n-1); 

	for (unsigned i = 0; i < n; i++){
		std::cout << arr[i] << " ";
	}

	return 0;
}