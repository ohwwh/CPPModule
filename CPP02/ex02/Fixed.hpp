#ifndef FIXED_HPP
#define FIXED_HPP
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

		bool operator>(const Fixed& fP) const;
		bool operator<(const Fixed& fP) const;
		bool operator>=(const Fixed& fP) const;
		bool operator<=(const Fixed& fP) const;
		bool operator==(const Fixed& fP) const;
		bool operator!=(const Fixed& fP) const;

		Fixed operator+(const Fixed& fP) const;
		Fixed operator-(const Fixed& fP) const;
		Fixed operator*(const Fixed& fP) const;
		Fixed operator/(const Fixed& fP) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

		~Fixed();
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fP);

#endif