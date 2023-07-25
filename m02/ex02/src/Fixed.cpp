/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:50:35 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/19 10:53:28 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Fixed.hpp"

// ---------- Cannon form ------------
//default constructor
Fixed::Fixed (void) : m_fixedValue(0) {
	return ;
}

// copy
Fixed::Fixed (Fixed const& src) {
	*this = src;
	return ;
}

//constructor const int
Fixed::Fixed (const int	number) {
	this->m_fixedValue = number << this->m_fracBits;
}

//constructor const float
Fixed::Fixed (const float	number){
	this->m_fixedValue = roundf(number * (1 << this->m_fracBits));
}

// destructor
Fixed::~Fixed (void) {
	return ;
}

// operator = overload
Fixed& Fixed::operator=(Fixed const& rhs) {
	this->m_fixedValue = rhs.getRawBits();
	return *this;
}

// ----------- Overload comparison operators ------------
bool Fixed::operator==(Fixed const& rhs) const {
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator<(Fixed const& rhs) const {
	return (this->m_fixedValue < rhs.getRawBits());
}

bool Fixed::operator>(Fixed const& rhs) const {
	return (this->m_fixedValue > rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const& rhs) const {
	return (this->m_fixedValue <= rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const& rhs) const {
	return (this->m_fixedValue >= rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const& rhs) const {
	return (this->m_fixedValue != rhs.getRawBits());
}

// ----------- Overload maths operators ------------
Fixed Fixed::operator+(Fixed const& rhs) const {
	
	return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const& rhs) const {
	return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const& rhs) const {
	return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const& rhs) const {
	return (this->toFloat() / rhs.toFloat());
}

// ----------- Overload incrementation & decrementation operators ------------
// operator pre++ overload
Fixed Fixed::operator++(void) {
	this->m_fixedValue++;
	return *this;
}
// operator pre-- overload
Fixed Fixed::operator--(void) {
	this->m_fixedValue--;
	return *this;
}
// operator post++ overload
Fixed Fixed::operator++(int) {
	Fixed buffer(*this);
	this->m_fixedValue++;
	return buffer;
}
// operator post-- overload
Fixed Fixed::operator--(int) {
	Fixed buffer(*this);
	this->m_fixedValue--;
	return buffer;
}

// ------------- Member Functions -------------
// getter
int Fixed::getRawBits(void) const {
	return (this->m_fixedValue);
}

// setter
void Fixed::setRawBits(int const raw){
	this->m_fixedValue = raw;
	return ;
}

float	Fixed::toFloat(void) const {
	return ((float)this->getRawBits() / (1 << this->m_fracBits));
}

int	Fixed::toInt(void) const {
	return (this->getRawBits() >> this->m_fracBits);
}

Fixed Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed Fixed::min(Fixed const& a, Fixed const& b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return (a);
	return (b);
}

Fixed Fixed::max(Fixed const& a, Fixed const& b) {
	if (a > b)
		return (a);
	return (b);
}

// ----------- other functions ------------
// operator << overload
std::ostream& operator<<(std::ostream& o, const Fixed& value) {
	return (o << value.toFloat());
}