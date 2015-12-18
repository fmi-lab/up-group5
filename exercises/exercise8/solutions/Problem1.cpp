/* Write a function which takes a matrix(NxM) filled with 
ones and zeros and returns the number of 2x2 squares with only ones or only zeros */
#include <iostream>
using namespace std;
#define maxSIZE 20 //< That way we define a constant which we can use in the entire program

unsigned same2x2(unsigned matrix[maxSIZE][maxSIZE], unsigned n, unsigned m){
	unsigned count = 0;
	unsigned current;
	for (int i = 0; i<n - 1; i++)
	{
		for (int j = 0; j<m - 1; j++)
		{
			current = matrix[i][j];
			if (current == matrix[i][j + 1] && current == matrix[i + 1][j] && current == matrix[i + 1][j + 1]){
				count++;
			}

		}
	}
	return count;
}

int main()
{
	unsigned matrix[maxSIZE][maxSIZE];
	unsigned n, m;
	std::cin >> n >> m;
	for (unsigned i = 0; i < n; i++){
		for (unsigned j = 0; j < m; j++){
			std::cin >> matrix[i][j];
		}
	}

	std::cout << same2x2(matrix, n, m);

	return 0;
}