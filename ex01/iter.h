#ifndef ITER_H_
 #define ITER_H_

#include <iostream>


class Iter
{
	public:
		//インスタンス化して、テンプレート関数で実行するテンプレート関数
		template <typename T>
		static void printValue(const T& value) {
			std::cout << "Value: " << value << std::endl;
		}
		//テンプレート関数
		template <typename T>
		static void iter(T* value_array, int times, void (*func)(const T& value))
		{
			for(int i = 0; i < times ; i ++)
				func(value_array[i]);
		}
};

#endif