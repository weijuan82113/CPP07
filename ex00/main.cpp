
#include <iostream>
#include "Compare.h"


int main()
{
	//const variable
	const int a = 2;
	const int b = 3;

	//a & b are const that will occuried the error here
	//swap(a,b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	//Compare test;
	int ret_max_i = ::max(2, 1);
	float ret_min_f = ::min(1.2f, 1.3f);
	double ret_max_d = ::max(1.2, 1.3);
	char rer_max_c = ::max('a', 'b');
	double ret_equal_d = ::max(1.123, 1.123);
	float ret_equal_f = ::max(1.123f, 1.123f);
	std::cout << "ret_max_i : " << ret_max_i << std::endl;
	std::cout << "ret_min_f : " << ret_min_f << std::endl;
	std::cout << "ret_max_d : " << ret_max_d << std::endl;
	std::cout << "rer_max_c : " << rer_max_c << std::endl;
	std::cout << "ret_equal_d : " << ret_equal_d << std::endl;
	std::cout << "ret_equal_f : " << ret_equal_f << std::endl;

	//swap test non-const variable
	int non_const_a = 5, non_const_b = 10;
    ::swap(non_const_a, non_const_b);
    std::cout << "a: " << non_const_a << ", b: " << non_const_b << std::endl;


	return 0;
}


