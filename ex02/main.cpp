#include "Array.h"
#include <iostream>

int main()
{
	const unsigned int length = 12;
	Array<int> intArray(length);
	Array<double> doubleArray(length);


	std::cout << "intArray's size: " << intArray.size() << std::endl;
	std::cout << "doubleArray's size: " << doubleArray.size() << std::endl;


	for (unsigned int i = 0; i < length; i++)
	{
		intArray[i] = i;
		doubleArray[i] = i + 0.5;
	}

	for (unsigned int i = length - 1; i > 0; --i)
		std::cout << intArray[i] << '\t' << doubleArray[i] << '\n';

	return 0;
}