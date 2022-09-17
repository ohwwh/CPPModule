#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point{
	const Fixed x;
	const Fixed y;

	public:
		Point();
		Point(const Point& p);
		Point& operator=(const Point& p);
		~Point();

		Point(const float x, const float y);
		Point(const Fixed x, const Fixed y);
		Point operator-(const Point& p) const;
		const Fixed& getX() const;
		const Fixed& getY() const;
};

#endif