#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	raw_bit = 0;
}

Fixed::Fixed(const Fixed& fP){
	std::cout << "Copy constructor called" << std::endl;
	*this = fP;
}

Fixed& Fixed::operator=(const Fixed& fP)
{
	std::cout << "Copy assignment operator called" << std::endl;
	raw_bit = fP.raw_bit;
	return (*this);
}

Fixed::Fixed(const int num){
	std::cout << "Int constructor called" << std::endl;
	raw_bit = num << frac_bit;
}

Fixed::Fixed(const float num){
	std::cout << "Float constructor called" << std::endl;
	raw_bit = (int)roundf(num * (1 << frac_bit));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (raw_bit);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	raw_bit = raw;
}

float Fixed::toFloat(void) const{
	return ((float)raw_bit / (1 << frac_bit));
}

int Fixed::toInt(void) const{
	return (raw_bit >> frac_bit);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fP){
	os << fP.toFloat();
	return (os);
}
