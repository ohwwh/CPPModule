#include <iostream>

class Fixed{
	int number;
	static const int bit = 8;

	public:
		Fixed();
		Fixed(const Fixed& fP);
		Fixed(const int num);
		Fixed(const float num);
		Fixed& operator=(const Fixed& fP);
		~Fixed();
		int	getRawBits(void) const;
		void setRawBits(int const raw);
};