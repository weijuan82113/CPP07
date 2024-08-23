#ifndef COMPARE_H_
 #define COMPARE_H_

template <typename T>
static void swap(T& x, T& y)
{
	T s = y;
	y = x;
	x = s;
}

template <typename T>
static T max(const T& x, const T& y)
{
	return (x < y) ? y : x;
}

template <typename T>
static T min(const T& x, const T& y)
{
	return (x > y) ? y : x;
}


#endif