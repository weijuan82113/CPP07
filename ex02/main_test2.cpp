#include "Array.h"
#include <iostream>
#include <cstdlib>

#define length 3
int main()
{
	Array<int> numbers(length);
	int* mirror = new int[length];
	std::srand(time(NULL));
	for (int i = 0; i < length; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //--------copy test--------
    Array<int> arr_cpy_constructor(numbers);
    Array<int> arr_cpy_copy_assingment = numbers;
    for (int i = 0; i < length; i++)
    {
        std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;
        std::cout << "arr_cpy[" << i << "]: " << arr_cpy_constructor[i] << std::endl;
        std::cout << "arr_assign[" << i << "]: " << arr_cpy_copy_assingment[i] << std::endl;
    }
    //--------copy test--------
	return 0;
}