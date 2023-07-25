/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:50:35 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/14 15:59:56 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Fixed.hpp"

//default constructor
Fixed::Fixed (void) : m_fixedValue(0) {
	std::cout << CYN "Default Construction called" NC << std::endl;
	return ;
}

// copy
Fixed::Fixed (Fixed const& src) {
	std::cout << YEL "Copy Constructor called" NC << std::endl;
	*this = src;
	return ;
}

//constructor const int
Fixed::Fixed (const int	number) {
	std::cout << MAG "INT Constructor called" NC << std::endl;
	this->m_fixedValue = number << this->m_fracBits;
}

//constructor const float
Fixed::Fixed (const float	number){
	std::cout << MAG "FLOAT Constructor called" NC << std::endl;
	this->m_fixedValue = roundf(number * (1 << this->m_fracBits));
}

// destructor
Fixed::~Fixed (void) {
	std::cout << RED "Destruction called" NC << std::endl;
	return ;
}

// operator = overload
Fixed& Fixed::operator=(Fixed const& rhs) {
	std::cout << YEL "Copy assignment operator called" NC << std::endl;
	this->m_fixedValue = rhs.getRawBits();
	return *this;
}

// operator << overload
std::ostream& operator<<(std::ostream& o, const Fixed& value) {
	return (o << value.toFloat());
}

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
