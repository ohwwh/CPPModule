#include "Point.hpp"

extern bool bsp(const Point a, const Point b, const Point c, const Point point);

int main(void)
{
	/*Point a(0, 0);
	Point b(6, 0);
	Point c(3, 6);
	Point p(3, 3);*/

	/*Point a(Fixed(0.0f), Fixed(0.0f));
	Point b(Fixed(6.0f), Fixed(0.0f));
	Point c(Fixed(3.0f), Fixed(6.0f));
	Point p(Fixed(7.0f), Fixed(3.0f));*/

	/*Point a(0, 0);
	Point b(6, 0);
	Point c(3, 6);
	Point p(3, 6);*/

	Point a(Fixed(0.0f), Fixed(0.0f));
	Point b(Fixed(6.0f), Fixed(0.0f));
	Point c(Fixed(0.0f), Fixed(6.0f));
	Point p(Fixed(2.999f), Fixed(3.0f));
	//smallest representable e

	std::cout << bsp(a, b, c, p) << std::endl;
}