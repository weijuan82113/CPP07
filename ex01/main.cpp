#include <string>

#include "iter.h"

int main()
{
	//constとconstではない関数を読んでテストをする
	const int int_array[3] = {1, 2, 3};
	char char_array[3] = {'a', 'b', 'c'};
	std::string str_array[3] = {"abc", "123", "ABC"};
	float float_array[3] = {1.1f, -1.2f, 11.3f};
	double double_array[3] = {1.1e10, 12.1234567890, 1.12345};

	std::cout << "------int test------" << std::endl;
	::iter(int_array, 3, ::printValue<int>);
	std::cout << "------int test------\n\n" << std::endl;


	std::cout << "------char test------" << std::endl;
	::iter(char_array, 3, ::printValue<char>);
	std::cout << "------char test------\n\n" << std::endl;


	std::cout << "------string test------" << std::endl;
	::iter(str_array, 3, ::printValue<std::string>);
	std::cout << "------string test------\n\n" << std::endl;


	std::cout << "------float test------" << std::endl;
	::iter(float_array, 3, ::printValue<float>);
	std::cout << "------float test------\n\n" << std::endl;


	std::cout << "------double test------" << std::endl;
	::iter(double_array, 3, ::printValue<double>);
	std::cout << "------double test------\n\n" << std::endl;


	return 0;
}