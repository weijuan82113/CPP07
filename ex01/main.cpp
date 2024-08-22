#include <string>
#include "iter.h"


int main()
{
	int int_array[3] = {1, 2, 3};
	char char_array[3] = {'a', 'b', 'c'};
	std::string str_array[3] = {"abc", "123", "ABC"};
	float float_array[3] = {1.1f, -1.2f, 11.3f};
	double double_array[3] = {1.1e10, 12.1234567890, 1.12345};

	std::cout << "------int test------" << std::endl;
	Iter::iter(int_array, 3, Iter::printValue<int>);
	std::cout << "------int test------\n\n" << std::endl;


	std::cout << "------char test------" << std::endl;
	Iter::iter(char_array, 3, Iter::printValue<char>);
	std::cout << "------char test------\n\n" << std::endl;


	std::cout << "------string test------" << std::endl;
	Iter::iter(str_array, 3, Iter::printValue<std::string>);
	std::cout << "------string test------\n\n" << std::endl;


	std::cout << "------float test------" << std::endl;
	Iter::iter(float_array, 3, Iter::printValue<float>);
	std::cout << "------float test------\n\n" << std::endl;


	std::cout << "------double test------" << std::endl;
	Iter::iter(double_array, 3, Iter::printValue<double>);
	std::cout << "------double test------\n\n" << std::endl;


	return 0;
}