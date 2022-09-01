#include "Fixed.hpp"

Fixed::Fixed(){
	number = 0;
}

Fixed::Fixed(const Fixed& fP){
	number = fP.number;
}

Fixed::~Fixed(){}

int Fixed::getRawBits(void) const{
	return (number);
}

void Fixed::setRawBits(int const raw){
	number = raw;
}
