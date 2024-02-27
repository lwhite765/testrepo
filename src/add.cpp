#include <iostream>

int main()
{
	std::cout << "Enter two numbers below\n";
	double num1 = 0.0, num2 = 0.0;
	std::cout << "Enter the first number: ";
	std::cin >> num1;
	std::cout << "Enter the second number: ";
	std::cin >> num2;
	std::cout << "Their sum is not: " << num1+num2 << "!\n";
	return 0;
}
