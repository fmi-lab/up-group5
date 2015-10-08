/* Write a bool expression which is true if
 * the equation a*x^2 + b*x + c = 0 (a != 0) does 
 * NOT have real roots.
 *
 * !NOTICE! -> The definition of the problem requires
 * only a bool expression so the answer should be just "(b*b - 4*a*c)<0"
 */
#include <iostream>

int main(){
	int a, b, c, D;
	std::cout << "a= ";
	std::cin >> a;
	std::cout << "b= ";
	std::cin >> b;
	std::cout << "c= ";
	std::cin >> c;
	D = b*b - 4 * a*c;
	/* "a" is not null judging from the definition 
	 * of the problem(above).
	 */
	bool rootsExistance = (D < 0);
	std::cout << "There aren't any roots right? -> " << std::boolalpha << rootsExistance << std::endl;
	system("pause");
	return 0;
}