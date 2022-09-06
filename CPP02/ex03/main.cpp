#include "Point.hpp"

extern bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void)
{
	Point a(0, 0);
	Point b(6, 0);
	Point c(3, 6);
	Point p(3, 3);

	std::cout << bsp(a, b, c, p) << std::endl;
}