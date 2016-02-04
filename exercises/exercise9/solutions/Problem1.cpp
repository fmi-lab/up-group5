/* Write a recursive function which compares two string(char arrays) lexicographically and returns:
-> If the first is ">" 1
-> If they are equal 0
-> If the second is ">" -1 */
#include <iostream>
#define maxSIZE 100 //< That way we define a constant which we can use in the entire program

int compareStrings(char *str1, char *str2){
	if(*str1 == '\0' && *str2 == '\0'){
		return 0;
	}
	else if (*str1 > *str2){
		return 1;
	}
	else if(*str2 > *str1){
		return -1;
	}
	return compareStrings(str1+1, str2+1);
}


int main()
{
	/// we fix the max length at 100(one symbol for the null-terminate character - "\0")
	char str1[maxSIZE+1], str2[maxSIZE+1]; 
	std::cin >> str1;
	std::cin >> str2;
	
	std::cout << compareStrings(str1, str2);
	return 0;
}