#include "Fixed.hpp"

Fixed::Fixed(){
	raw_bit = 0;
}

Fixed::Fixed(const Fixed& fP){
	*this = fP;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int num){
	raw_bit = num << frac_bit;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num){
	raw_bit = (int)roundf(num * (1 << frac_bit));
	std::cout << "Float constructor called" << std::endl;
}



Fixed& Fixed::operator=(const Fixed& fP)
{
	raw_bit = fP.raw_bit;
	std::cout << "Copy called" << std::endl;
	return (*this);
}


bool Fixed::operator>(const Fixed& fP) const{
	return ((raw_bit > fP.raw_bit) ? true : false);
}
bool Fixed::operator<(const Fixed& fP) const{
	return ((raw_bit < fP.raw_bit) ? true : false);
}
bool Fixed::operator>=(const Fixed& fP) const{
	return ((raw_bit >= fP.raw_bit) ? true : false);
}
bool Fixed::operator<=(const Fixed& fP) const{
	return ((raw_bit <= fP.raw_bit) ? true : false);
}
bool Fixed::operator==(const Fixed& fP) const{
	return ((raw_bit == fP.raw_bit) ? true : false);
}
bool Fixed::operator!=(const Fixed& fP) const{
	return ((raw_bit != fP.raw_bit) ? true : false);
}


Fixed Fixed::operator+(const Fixed& fP) const{
	Fixed ret;

	ret.setRawBits(raw_bit + fP.raw_bit);
	return (ret);
}
Fixed Fixed::operator-(const Fixed& fP) const{
	Fixed ret;
	
	ret.setRawBits(raw_bit - fP.raw_bit);
	return (ret);
}
Fixed Fixed::operator*(const Fixed& fP) const{
	Fixed ret;
	
	ret.setRawBits(raw_bit * fP.raw_bit / (1 << frac_bit));
	return (ret);
}
Fixed Fixed::operator/(const Fixed& fP) const{
	Fixed ret;
	
	ret.setRawBits(raw_bit / fP.raw_bit * (1 << frac_bit));
	return (ret);
}
// fractional bit의 중복 계산 문제에 주의

Fixed& Fixed::operator++(){
	raw_bit += 1;
	return (*this);
}
Fixed Fixed::operator++(int){
	Fixed temp(*this);

	raw_bit += 1;
	return (temp);
}
Fixed& Fixed::operator--(){
	raw_bit -= 1;
	return (*this);
}
Fixed Fixed::operator--(int){
	Fixed temp(*this);

	raw_bit -= 1;
	return (temp);
}
//smallest representable e


Fixed& Fixed::min(Fixed& a, Fixed& b){
	return ((a.getRawBits() < b.getRawBits()) ? a : b);
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
	return ((a.getRawBits() < b.getRawBits()) ? a : b);
}
Fixed& Fixed::max(Fixed& a, Fixed& b){
	return ((a.getRawBits() >= b.getRawBits()) ? a : b);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
	return ((a.getRawBits() >= b.getRawBits()) ? a : b);
}


Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	return (raw_bit);
}

void Fixed::setRawBits(int const raw){
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
