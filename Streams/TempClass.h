#pragma once
#include <iostream>
using namespace std;

template<typename T = int> // Defaults to int if user doesn't pass datatype
class TempClass
{
private:
	T x, y;

public:
	TempClass() : x{ 0 }, y{ 0 } {};
	TempClass(T x, T y) : x{ x }, y{ y } {};
};

template<typename T, int size>
class TempArray {
private:
	T m_elements[size];

public:
	T operator [] (int index) { return m_elements[index]; }
};

