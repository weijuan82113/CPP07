#ifndef ITER_H_
 #define ITER_H_

#include <iostream>

//インスタンス化して、テンプレート関数で実行するテンプレート関数
//値を変更しない時に使う関数
template <typename T>
void printValue(const T& value) {
	std::cout << "Value: " << value << std::endl;
}

//インスタンス化して、テンプレート関数で実行するテンプレート関数
//値を変換したい時に使う関数
template <typename T>
void printValue(T& value) {
	value ++;
	std::cout <
	< "Value: " << value << std::endl;
}

//const テンプレート関数
template <typename T>
void iter(const T* array, int length, void (*func)(const T& value))
{
	for(int i = 0; i < length ; i ++)
		func(array[i]);
}

//テンプレート関数
template <typename T>
void iter(T* array, int length, void (*func)(T& value))
{
	for(int i = 0; i < length ; i ++)
		func(array[i]);
}

#endif