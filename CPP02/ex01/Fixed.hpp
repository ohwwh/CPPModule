#include <iostream>
#include <cmath>

class Fixed{
	int raw_bit;
	static const int frac_bit = 8;

	public:
		Fixed();
		Fixed(const Fixed& fP);
		Fixed(const int num);
		Fixed(const float num);
		Fixed& operator=(const Fixed& fP);
		~Fixed();
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fP);