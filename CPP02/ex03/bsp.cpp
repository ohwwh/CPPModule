#include "Point.hpp"

Fixed cross_product(const Point a, const Point b){
	return (a.getX() * b.getY() - a.getY() * b.getX());
}

bool bsp(const Point a, const Point b, const Point c, const Point point){
	if (cross_product(b-a, point-a) * cross_product(b-a, c-a) > 0)
	{
		if (cross_product(c-b, point-b) * cross_product(c-b, a-b) > 0)
		{
			if (cross_product(a-c, point-c) * cross_product(a-c, b-c) > 0)
				return (true);
		}
	}
	return (false);
}