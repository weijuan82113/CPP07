#include <iostream>
#include <cstdlib>
#include "Array.h"

#define MAX_VAL 750
#define LENGTH 3
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    std::srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-3] = 0;
        std::cout << "numbers[-3] = 0; successful" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
        std::cout << "numbers[MAX_VAL] = 0; successful" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < LENGTH; i++)
    {
        //non-const operator[]
        numbers[i] = rand();
        //const operator[]
        std::cout << "numbers["<< i <<"]" << numbers[i] << std::endl;
    }

    //--------copy test--------
    Array<int> arr_cpy_constructor(numbers);
    Array<int> arr_cpy_copy_assingment = numbers;
    for (int i = 0; i < LENGTH; i++)
    {
        std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;
        std::cout << "arr_cpy[" << i << "]: " << arr_cpy_constructor[i] << std::endl;
        std::cout << "arr_assign[" << i << "]: " << arr_cpy_copy_assingment[i] << std::endl;
    }
    //--------copy test--------
    delete [] mirror;//
    return 0;
}
