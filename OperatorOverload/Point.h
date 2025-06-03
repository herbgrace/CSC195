#pragma once
#include <iostream>
using namespace std;

namespace ost 
{


	class Point
	{
	public:
		float x, y;
	
	public:
		// Point() { x = 0; y = 0; }  2-step process
		Point() : x{ 0 }, y{ 0 } {} // Single step process
		Point(float x, float y) : x{ x }, y{ y } {}

		void write(ostream& ostream);
		void add(Point& point);

		Point operator + (Point& p2);
		void operator << (ostream& ostream);
	};
}

