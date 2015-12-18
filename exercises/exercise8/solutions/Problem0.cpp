/* Write a function which fills a matrix(NxN) with numbers starting 
   from 1 in the following way -> https://gyazo.com/53e64fd23217f77015028df9fb90c5cf */
#include <iostream>
using namespace std;
#define maxSIZE 20 //< That way we define a constant which we can use in the entire program

void fillDiagonally(unsigned matrix[][maxSIZE], unsigned n){
	unsigned p = 1; //< the number with which we will fill the matrix

	for (int k = 0; k <= (n - 1) * 2 ; k++)
	{
		if (k < n){
			if (k % 2){
				for (int i = 0; i <= k; i++){
					matrix[i][k - i] = p;
					p++;
				}
			}
			else{
				for (int i = 0; i <= k; i++){
					matrix[k - i][i] = p;
					p++;
				}
			}
		}
		else{
			if (k % 2){
				for (int i = k - n + 1; i < n; i++){
					matrix[i][k - i] = p;
					p++;
				}
			}
			else{
				for (int i = k - n + 1; i < n; i++){
					matrix[k - i][i] = p;
					p++;
				}
			}
		}
	}
}

int main()
{
	unsigned matrix[maxSIZE][maxSIZE];
	unsigned n;
	std::cin >> n;
	fillDiagonally(matrix, n);

	for (unsigned i = 0; i < n; i++){
		for (unsigned j = 0; j < n; j++){
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}