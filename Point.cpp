//Point.cpp
#include "Point.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <sstream>

double Point::Distance(Point B) {
	return sqrt((B.x - this->x) * (B.x - this->x) + (B.y - this->y) * (B.y - this->y));
}
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(double r = 0, double i = 0) {
	x = r;
	y = i;
}
Point::Point(const Point& p) {
	x = p.x;
	y = p.y;
}
Point::operator string () const
{
	stringstream ss;
	ss << "X = " << x << endl;
	ss << "Y = " << y << endl;
	return ss.str();
}
Point Point::operator --(int)
{
	Point a(*this);
	x--;
	return a;
}
Point Point::operator ++(int)
{
	Point a(*this);
	x++;
	return a;
}
Point Point::operator--() {
	--y;
	return *this;
}
Point Point::operator ++() {
	++y;
	return *this;
}
ostream& operator <<(ostream& out, const Point& a)
{
	out << string(a) << endl;
	return out;
}
istream& operator >>(istream& in, Point& a)
{
	cout << "a(x) = ";
	in >> a.x;
	cout << "a(y) = ";
	in >> a.y;
	return in;
}