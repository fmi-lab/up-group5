/* Task: Traverse in a spiral order a given matrix of strings
   and concatenate all the words in that order. For example:
   (as b c)
   (d e fa) -> asbcfaixhgde
   (g h ix) */
#include <iostream>
#include <cstring>

using namespace std;

/* Prints one dimensional character array!
   printWord takes the length of the character array and 
   prints every character in it. strlen(..) gives us the
   length of the character array and it works only with
   string a.k.a char arrays */
void printWord(char arr[]){
	unsigned len = strlen(arr);
	for (unsigned i = 0; i < len; i++){ 
		std::cout << arr[i];
	}
}

void concatSpiral(char matrix[][20][9], unsigned n) {
	/* using unsigned everywhere because we don't use 
	   negative numbers anywhere in this program (only positive) */
	unsigned direction = 0, finalFieldRow, finalFieldCol, i = 0, j = 0, borderPatrol1 = n-1, borderPatrol2 = 0;
	finalFieldRow = n / 2; //< the final field row is always n/2
	//if n is odd then finalFieldCol is n/2, otherwise it is n/2 - 1
	(n % 2 == 1) ? finalFieldCol = n / 2 : finalFieldCol = n / 2 - 1; //< ternary operator usage

	//Let us start moving and concatenate
	while (i != finalFieldRow || j != finalFieldCol){
		/* By printing the words in the correct order
		   and without separators(e.g. spaces) we ensure
		   that we got them concatenated */
		printWord(matrix[i][j]); //< We pass the current word for printing!
		//!* We use the two borderPatrols to regulate when to change direction *
		/*   1.Check for Change of the direction:
		     1.1 We have reached the right border -> go down
		     1.2 We have reached the bottom border -> go left
		     1.3 We have reache the left border -> go up */
		if ((i == borderPatrol1 && j == borderPatrol2) ||  //< 1.1
			(i == borderPatrol1 && j == borderPatrol1) ||  //< 1.2
			(i == borderPatrol2 && j == borderPatrol1))    //< 1.3 
		{
			direction++;
		}
		//   1.4 We have reached the top border -> go right
		else if (i == borderPatrol2 + 1 && j == borderPatrol2){
			direction = 0;
			//We get one level deeper into the matrix so we make adjusments to the borderPatrols
			borderPatrol1--;
			borderPatrol2++;
		}
		//2. Movement
		switch (direction){
			case 0: j++; break; //< 2.1 move right
			case 1: i++; break; //< 2.2 move down
			case 2: j--; break; //< 2.3 move left
			case 3: i--; break; //< 2.4 move up
		}
	}
	printWord(matrix[finalFieldRow][finalFieldCol]); //< printing the final word in the middle
}

int main()
{
	char arr[20][20][9];
	unsigned n;
	do{
		std::cin >> n;
	} while (n < 1 || n >20);

	for (unsigned i = 0; i < n; i++){
		for (unsigned j = 0; j < n; j++){
			std::cin >> arr[i][j];
		}
	}
	concatSpiral(arr, n);
	system("pause");
	return 0;
}