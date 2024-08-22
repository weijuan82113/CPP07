#ifndef COMPARE_H_
 #define COMPARE_H_

class Compare
{
	public:
		template <typename T>
		static void swap(T& x, T& y)
		{
			T s = y;
			y = x;
			x = s;
		}

		template <typename T>
		static T max(T x, T y)
		{
			return (x < y) ? y : x;
		}

		template <typename T>
		static T min(T x, T y)
		{
			return (x > y) ? y : x;
		}

};

#endif