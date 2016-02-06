// Solutions to Exam1 in Introduction to Programming - SU / Group 5
#include <iostream>
#include <vector>

/* Fill free to come up with both iterative and recursive
 * solutions to the problems below. I will demonstrate both
 * types of solutions for Problem 0. You can compare the two
 * kinds of solutions and decide which is better */

/*                      Problem 0: 
 * Write a program that finds and outputs all n dimensional
 * vectors with components 0 and 1 (1 <= n <= 20) */

/// maximum size of the vector given by problem definition
const size_t vectorMAXSIZE = 20;

void printBinVector(bool *vector, const size_t& vectorSIZE){
	std::cout << "(";
	for (size_t i = 0; i < vectorSIZE - 1; i++) {
		std::cout << vector[i] << ", ";
	}
	std::cout << vector[vectorSIZE - 1] << ")" << std::endl;
}

/// *** Recursive Solution: ***
void nDimVectorsRecHelper(bool *vector, const size_t& vectorSIZE, size_t currentPos);

void nDimVectorsRecursive(const size_t& vectorSIZE){
	if (vectorSIZE > 0 && vectorSIZE <= vectorMAXSIZE){
		bool vector[vectorMAXSIZE];
		nDimVectorsRecHelper(vector, vectorSIZE, 0);
	}
}

void nDimVectorsRecHelper(bool *vector, const size_t& vectorSIZE, size_t currentPos) {
  /// We have filled the whole vector with values so we can print it 
  if (currentPos >= vectorSIZE) {
	printBinVector(vector, vectorSIZE);
    return;
  }
   /* Place at the current position the value false(0) and call the function 
    * recursively for the next position. Same with the value true(1).
	* The following 4 lines can be replaced by a simple for loop */
   vector[currentPos] = false;
   nDimVectorsRecHelper(vector, vectorSIZE, currentPos + 1);
   vector[currentPos] = true;
   nDimVectorsRecHelper(vector, vectorSIZE, currentPos + 1);
}


/// *** Iterative Solution: ***

void decToBinVector(unsigned decNum, const size_t& vectorSIZE);

/* The idea behind this solution is that we just have to print
 * the numbers from 0 to 2^n - 1 in binary. So have a function to
 * transfer and print a decimal numbero to binary and print it. 
 * We call this function for all numbers from 0 to 2^n - 1*/
void nDimVectorsIterative(const size_t& vectorSIZE){
	if (vectorSIZE < 1 || vectorSIZE > vectorMAXSIZE){
		return;
	}
	unsigned max = (unsigned)std::pow(2, vectorSIZE);
	for (size_t i = 0; i < max; i++){
		decToBinVector(i, vectorSIZE);
	}
}
void decToBinVector(unsigned decNum, const size_t& vectorSIZE){
	bool binVector[vectorMAXSIZE];
	if (decNum == 0){
		for (size_t i = 0; i < vectorSIZE; i++){
			binVector[i] = false;
		}
	}
	else{
		size_t index = vectorSIZE - 1;
		/// convert the decimal number to binary vector
		while (index > 0 && decNum >= 1){
			/// here you can leave the next line as just = decNum % 2 but
			/// it is not a very good practice to do it. It will work though.
			binVector[index] = (decNum % 2) == 1;
			decNum /= 2;
			index--;
		}
		if (decNum == 1){
			binVector[index] = true;
		}
		else{
			/// fill with zeroes the remaining empty spots
			for (size_t i = 0; i <= index; i++){
				binVector[i] = false;
			}
		}
	}
	printBinVector(binVector, vectorSIZE); ///< print the result
}


/*                     Problem 1:
 * Define a recursive function that finds the value of the 
 * Ackerman function Ack(m,n) for a given m and n */

/// Recursive(Easier) solution:

/// We just use the recursive definition of the function itself
long ackermanFunc(long m, long n){
	if (m == 0){
		return n + 1;
	}
	if (m > 0 && n == 0){
		return ackermanFunc(m - 1, 1);
	}
	return ackermanFunc(m - 1, ackermanFunc(m, n - 1));
}

/*                     Problem 2:
 * Write a program which sorts descendingly an array of strings
 * (array of characters with maximum size 1000) using Merge sort
 * or Quicksort. */

const size_t maxStrNum = 1000;
const size_t maxStrLen = 100;

/// Quicksort:
void swap(char str1[maxStrLen], char str2[maxStrLen]){
	char temp[maxStrLen];
	size_t len1, len2;
	len1 = strlen(str1) + 1;
	len2 = strlen(str2) + 1;
	strcpy_s(temp, len1, str1);
	strcpy_s(str1, len2, str2);
	strcpy_s(str2, len1, temp);
}

/// Just pasted quicksorted from exercise9 with some minor changes :)
void quickSort(char arr[][maxStrLen], size_t start, size_t end) {
	char* pivot = arr[start];
	size_t openIndex = start;
	for (size_t i = start + 1; i <= end; i++) {
		///You can also use the stringCompare function we wrote in exercise 9
		if (strcmp(pivot, arr[i]) < 0) {
			openIndex++;
			swap(arr[openIndex], arr[i]);
		}
	}
	swap(arr[start], arr[openIndex]);
	if (openIndex != 0 && openIndex - 1 > start){
		quickSort(arr, start, openIndex - 1);
	}
	if (openIndex + 1 < end){
		quickSort(arr, openIndex + 1, end);
	}
}

/// Merge Sort:

//Again pasted mergeSort from exercise9 with some changes
void mergeSort(char arr[][maxStrLen], size_t start, size_t end) {
	if (start == end) {
		return;
	}
	size_t middle = (start + end) / 2;
	mergeSort(arr, start, middle);
	mergeSort(arr, middle + 1, end);
	char temp[maxStrNum][maxStrLen];
	size_t left = start, right = middle + 1, tempIndex = 0;

	//Perform the merging procedure
	while (left <= middle && right <= end) {
		if (strcmp(arr[left], arr[right]) > 0) {
			strcpy_s(temp[tempIndex] , strlen(arr[left]) +1, arr[left]);
			left++;
		}
		else {
			strcpy_s(temp[tempIndex], strlen(arr[right]) + 1, arr[right]);
			right++;
		}
		tempIndex++;
	}

	while (left <= middle){
		strcpy_s(temp[tempIndex], strlen(arr[left]) + 1, arr[left]);
		left++;
		tempIndex++;
	}
	while (right <= end){
		strcpy_s(temp[tempIndex], strlen(arr[right]) + 1, arr[right]);
		right++;
		tempIndex++;
	}
	//After the merging we got the sorted array in temp

	left = start; //< we fix left to be the start of the part we sort now
	size_t i = 0; //< we start from 0 in the temp array

	//Copy the elements merged in the temp array back in the one we sort -> arr
	while (i < tempIndex && left <= end){
		strcpy_s(arr[left], strlen(temp[i]) + 1, temp[i]);
		left++;
		i++;
	}

}

/*                     Problem 3:
 * Write a program takes as input a boolean expression 
 * (without mistakes and spaces) of the following kind:
 *    <boolean_expression> ::= t | f | <operation>(<operands>)
 *    <operation> ::= n | a | o
 *    <operands> ::= <operand> | <operand>,<operands>
 *    <operand> ::= <boolean_expression>
 * where t and f mean true and false, n is unary operator 
 * (takes only one argument) and means negation, 
 * a and o take a non fixed number of operands and mean and (&&) and or (||). 
 * The program should find and return the value of the boolean expression. */

bool evaluate() {
  char currSymbol;
  currSymbol = getchar();
  bool result, current;

  switch (currSymbol) {
  case 't':
    return true;
  case 'f':
    return false;
  case 'n':
    return !evaluate();
  case 'o':
	  currSymbol = getchar();
	  result = evaluate();
	  currSymbol = getchar();
	  while (currSymbol != ')')
	  {
		  current = evaluate();
		  result = result || current;
		  currSymbol = getchar();
	  }
	  return result;
  case 'a':
	  /// skip the opening parenthesis '('
	  currSymbol = getchar();
	  /// evaluate the first argument
	  result = evaluate();
	  /// skip the comma ','
	  currSymbol = getchar();
	  while (currSymbol != ')')
	  {
		  /// evaluate the next argument
		  current = evaluate();
		  /// make the operation
		  result = result && current;
		  /// skip the comma ',' or ')'
		  currSymbol = getchar();
	  }
	  return result;
  }
}

/*                     Problem 4:
 * Define a function that, for a given single argument function f that 
 * returns integer and integer range [a, b] with values from 
 * the domain of f, returns the max value of f in [a, b]. */

int maxFuncValue(int f(int), int a, int b){
	int maxValue = f(a), currValue;
	for (int i = a+1; i <= b; i++){
		currValue = f(i);
		if (currValue > maxValue){
			maxValue = currValue;
		}
	}
	return maxValue;
}

/*                     Problem 5:
* Write a program that finds the shortest way starting from top 
* left and ending bottom right of the maze in case a path is present. */

const size_t maxMazeSIZE = 100;
const int dx[4] = { 1, -1, 0, 0 };
const int dy[4] = { 0, 0, 1, -1 };
const size_t rows = 8;
const size_t cols = 8;

struct position{
	int row;
	int col;
};

void findMinPathDFS(bool maze[][maxMazeSIZE], std::vector<position> &minPath,
	std::vector<position> &currentPath, position currPos);

bool findMinPathBFS(bool maze[][maxMazeSIZE]);


int minLen = INT_MAX; ///< Shortest path length for DFS
bool foundPath = false; ///< Is there even a path between the two positions

void findMinPath(bool maze[][maxMazeSIZE], bool BFS){
	if (BFS){
		if (!findMinPathBFS(maze)){
			std::cout << "No path was found!";
		}
	}
	else{
		std::vector<position> currPath, minPath;
		position start;
		start.row = 0;
		start.col = 0;
		findMinPathDFS(maze, minPath, currPath, start);
		if (foundPath){
			/* If we have found a path with the DFS algorithm 
			 * we just print the shortest one */
			std::cout << "The shortest path is: " << std::endl;
			position current;
			for (size_t i = 0; i < minLen; i++){
				current = minPath[i];
				std::cout << "(" << current.row << "," << current.col << ")->";
			}
		}
		else{
			std::cout << "No path was found!";
		}
	}
}

/// D E P T H   F I R S T   S E A R C H

/* Function implementing finding shortest path in an maze using
 * the Depth First Search algorithm. We save the minimum found path
 * in the vector minPath. A vector is like an array without a fixed
 * size. currPos is the position we are at. We use two global variables
 * minLen and foundPath for saving the current minimum path length
 * and if we even found one. */
void findMinPathDFS(bool maze[][maxMazeSIZE], std::vector<position> &minPath,
					std::vector<position> &currentPath, position currPos) {
	int currRow = currPos.row;
	int currCol = currPos.col;
	currentPath.push_back(currPos); ///< put the current positon at the back
	/// If the position is not valid stop with this recursive call
	if (currRow < 0 || currCol < 0 || currCol >= cols || currRow >= rows ||
		!maze[currRow][currCol]){
		return;
	}
	/* In case we are the ending position we mark that we found a path
	 * and check if the one we just found is with less size than the ones 
	 * we found before. minLen is initialized with the max value of the
	 * integer type so we are sure that the first time we find
	 * a path it will be saved. In this case we stop(return) too */
	if (currRow == rows - 1 && currCol == cols - 1){
		foundPath = true;
		int currSIZE = currentPath.size();
		if (currSIZE < minLen){
			minLen = currSIZE;
			minPath = currentPath;
		}
		return;
	}
	/// When the current position is valid and is not the end:

	/// Mark the current as passed
	maze[currRow][currCol] = false;
	position newPos;
	/// Traverse in four directions in the maze
	for (size_t i = 0; i < 4; i++) {
		newPos.row = currRow + dy[i];
		newPos.col = currCol + dx[i];
		findMinPathDFS(maze, minPath, currentPath, newPos);
		currentPath.pop_back(); ///< remove the last added in the vector
	}
	/*  Unmark the current position after we tried 
	 * finding path from it so we don't enter a cycle */
	maze[currRow][currCol] = true;
}

/// B R E A D T H   F I R S T   S E A R C H

/* Function implementing finding shortest path in an maze using
 * the Breadth Firt Search Algorithm. The data structure Queue 
 * is normally used for implemething this algorithm.  
 * TRY implementing it. 
 * Here is the starting idea. The code below has problem :) */

bool findMinPathBFS(bool maze[][maxMazeSIZE]) {
  /* std::queue<position> path;
   * std::vector<position> shortestPath;
   *
   * position currPos;
   * currPos.row = 0;
   * currPos.col = 0;
   * path.push(currPos);
   * position newPos;
   *
   * while (!path.empty()) {
   *   currPos = path.front();
   *   path.pop();
   *   size_t currRow, currCol;
   *   currRow = currPos.row;
   *   currCol = currPos.col;
   *   if (currRow == rows - 1 && currCol == cols - 1){
   *        std::cout << "The shortest path is: " << std::endl;
   *        for (size_t i = 0; i < shortestPath.size(); i++){
   *                currPos = shortestPath[i];
   *                std::cout << "(" << currPos.row << "," << currPos.col << ")->";
   *        }
   *        return true;
   *   }
   *   maze[currRow][currCol] = false;
   *   for (size_t i = 0; i < 4; i++) {
   *        newPos.row = currRow + dy[i];
   *        newPos.col = currCol + dx[i];
   *        if (newPos.row >= 0 && newPos.col >= 0 && newPos.col < cols &&
   *                newPos.row < rows && maze[newPos.row][newPos.col]){
   *                path.push(newPos);
   *        }
   * }
   * return false;
   */
	return false;
}