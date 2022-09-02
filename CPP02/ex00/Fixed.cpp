#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	raw_bit = 0;
}

Fixed::Fixed(const Fixed& fP){
	std::cout << "Copy constructor called" << std::endl;
	//raw_bit = fP.raw_bit;
	//raw_bit = fP.getRawBits();
	*this = fP;
}

Fixed& Fixed::operator=(const Fixed& fP)
{
	std::cout << "Copy assignment operator called" << std::endl;
	//raw_bit = fP.raw_bit;
	raw_bit = fP.getRawBits();
	return (*this);
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
