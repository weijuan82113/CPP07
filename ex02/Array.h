#ifndef ARRAY_H_
 #define ARRAY_H_

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int length);
		~Array();
		Array(const Array& arr);
		Array& operator=(const Array& arr);
		//constとnon-constのoperator[]
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		unsigned int size() const;

	private:
		unsigned int length_;
		T* data_;
};

#include "Array.tpp"

#endif