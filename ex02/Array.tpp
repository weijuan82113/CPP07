#ifndef ARRAY_TPP
 #define ARRAY_TPP

#include <cstring> // For memcpy
#include <stdexcept> // For std::out_of_range
#include <iostream> // For std::cout

#include "Array.h"

// Default constructor
template <typename T>
Array<T>::Array() : length_(0), data_(NULL)
{
	std::cout << "Constructe empty Array" << std::endl;
}

// Parameterized constructor
template <typename T>
Array<T>::Array(unsigned int length) : length_(length), data_(new T[length])
{
	std::cout << "Constructe Array[" << length << "]" << std::endl;
}

// Copy constructor
template <typename T>
Array<T>::Array(const Array& arr) : length_(arr.length_), data_(new T[arr.length_])
{
    *this = arr;
}

// Assignment operator
template <typename T>
Array<T>& Array<T>::operator=(const Array& arr)
{
    if (this != &arr)
    {
        delete[] data_;
        length_ = arr.length_;
        data_ = new T[length_];
        std::memcpy(data_, arr.data_, length_ * sizeof(T));
    }
    return *this;
}

// Destructor
template <typename T>
Array<T>::~Array()
{
	delete[] data_;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    unsigned int uint_index = static_cast<unsigned int>(index);
    if (uint_index >= length_) {
        throw std::out_of_range("Index out of range");
    }
    return data_[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= length_) {
        throw std::out_of_range("Index out of range");
    }
    return data_[index];
}

template <typename T>
unsigned int Array<T>::size()
{
    return length_;
}

#endif