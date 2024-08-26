#ifndef COMPARE_H_
 #define COMPARE_H_

template <typename T>
static void swap(T& x, T& y)
{
	//Do not declare T s = y directly, to avoid assuring the Type T defined =operator
	T s;
	s = y;
	y = x;
	x = s;
}

//have to return const T&, if return T the func has to construtor T and copy value to it
template <typename T>
static const T& max(const T& x, const T& y)
{
	return (x < y) ? y : x;
}

template <typename T>
static const T& min(const T& x, const T& y)
{
	return (x > y) ? y : x;
}


#endif