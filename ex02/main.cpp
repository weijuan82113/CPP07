#include <iostream>
#include <cstdlib>
#include "Array.h"

#define MAX_VAL 750
#define LENGTH 3
int main(int, char**)
{
//--------construction test--------
    std::cout << "------construction test------" << std::endl;
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
    std::cout << "Array's size: " << numbers.size() << std::endl;
    std::cout << "------construction test successful------\n\n" << std::endl;
//--------construction test--------

//--------range test--------
    std::cout << "------range test1------" << std::endl;
    try
    {
        //should out the range
        numbers[-3] = 0;
        std::cout << "numbers[-3] = 0; test failed" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "------range test successful------\n\n" << std::endl;
    }
    std::cout << "------range test2------" << std::endl;
    try
    {
        //should out the range
        numbers[MAX_VAL] = 0;
        std::cout << "numbers[MAX_VAL] = 0; test failed" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "------range test successful------\n\n" << std::endl;
    }
//--------range test--------

//--------non-const test--------
    std::cout << "------non-const operator[] test------" << std::endl;
    for (int i = 0; i < LENGTH; i++)
    {
        int rand_int = rand();
        std::cout << "reserve " << rand_int << " to " << "numbers["<< i <<"] "  << std::endl;
        //non-const operator[]
        numbers[i] = rand_int;
    }
    std::cout << "------non-const operator[] test------\n\n" << std::endl;
//--------non-const test--------

//--------copy test--------
    std::cout << "------copy test------" << std::endl;
    Array<int> arr_cpy_constructor(numbers);
    Array<int> arr_cpy_copy_assingment = numbers;
    for (int i = 0; i < LENGTH; i++)
    {
        //const operator[]
        std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;
        std::cout << "arr_cpy[" << i << "]: " << arr_cpy_constructor[i] << std::endl;
        std::cout << "arr_assign[" << i << "]: " << arr_cpy_copy_assingment[i] << std::endl;
    }
    std::cout << "------copy test------\n\n" << std::endl;
//--------copy test--------

    delete [] mirror;//
    return 0;
}
