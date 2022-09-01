#include <iostream>

class Fixed{
	int number;
	static const int bit = 8;

	public:
		Fixed();
		Fixed(const Fixed& fP);
		Fixed& operator=(const Fixed& fP);
		~Fixed();
		int	getRawBits(void) const;
		void setRawBits(int const raw);
};