/* Write a program which takes input -> age 
 * and finds the number of days, hours, minutes
 * and seconds the person has lived.
 */
#include <iostream>

int main() {
  unsigned int age, days, hours, minutes;
  /* If we want our program to work with old
  * people (68+), we should make the seconds'
  * type -> unsigned long long int (the second
  * long is for the really old ones, for
  * example you can try with 150 years).
  * Check Reference 1.
  */
  unsigned long long int seconds;
  std::cout << "age = ";
  std::cin >> age;
  /* Here we add age/4 because of the leap years
  * It is still not exactly right but you will solve this in
  * Problem 6: Exercise 2.12 of your homework from the lectures
  * and then you can fix this.
  */
  days = age * 365 + age / 4;
  hours = days * 24;
  minutes = hours * 60;
  /* Here we cast the minutes to long long so we
   * don't get an integer from the multiplication.
   * Check Reference 2.
   */
  seconds = (long long)minutes * 60;
  //We print the values so we can make sure we have everything fine.
  std::cout << "You have lived " << days << " days, " << hours << " hours, "
            << minutes << " minutes and " << seconds << " seconds !" 
			<< std::endl;
  system("pause");
  return 0;

  
}