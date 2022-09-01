#include "Fixed.hpp"

Fixed::Fixed(){
	number = 0;
}

Fixed::Fixed(const Fixed& fP){
	number = fP.number;
}

Fixed::Fixed(const int num){
	number = num << 8;
}

Fixed::Fixed(const float num){
	
}

Fixed::~Fixed(){}

int Fixed::getRawBits(void) const{
	return (number >> 8);
}

void Fixed::setRawBits(int const raw){
	number = raw;
}
