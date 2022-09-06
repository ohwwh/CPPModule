#include "Point.hpp"

Point::Point() : x(0), y(0){}

Point::Point(const Point& p) : x(p.x), y(p.y) {}
Point& Point::operator=(const Point& p){
	(Fixed)x = (Fixed)p.x;
	(Fixed)y = (Fixed)p.y;
	return (*this);
}
Point::~Point(){}

Point::Point(const float a, const float b) : x(Fixed(a)), y(Fixed(b)){}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y){}

Point Point::operator-(const Point& p) const{
	Point ret(x - p.x, y - p.y);
	return (ret);
}

const Fixed& Point::getX() const{
	return (x);
}
const Fixed& Point::getY() const{
	return (y);
}


