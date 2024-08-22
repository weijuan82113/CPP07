#ifndef ARRAY_H_
 #define ARRAY_H_

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int length);
		~Array();
		Array(Array& arr);
		Array& operator=(const Array&);
		T& operator[](unsigned int index);
		unsigned int size();

	private:
		unsigned int length_;
		T* data_;
};

#include "Array.tpp"

#endif