#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
	int raw_bit;
	static const int frac_bit = 8;

	public:
		Fixed();
		Fixed(const Fixed& fP);
		Fixed& operator=(const Fixed& fP);
		~Fixed();
		
		int	getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif