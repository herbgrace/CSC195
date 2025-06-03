#include "Point.h"

ost::Point ost::Point::operator + (Point& p2)
{
	Point sumPoint;
	sumPoint.x = p2.x + x;
	sumPoint.y = p2.y + y;
	return sumPoint;
}

void ost::Point::operator << (ostream& ostream)
{
	ostream << x << " : " << y << endl;
}

void ost::Point::write(ostream& ostream)
{
	ostream << x << " : " << y << endl;
}

void ost::Point::add(Point& point)
{
	x += point.x;
	y += point.y;
}
