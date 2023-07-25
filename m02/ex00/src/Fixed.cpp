/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:50:35 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/12 15:34:52 by ewurstei         ###   ########.fr       */
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
	std::cout << MAG "Copy Constructor called" NC << std::endl;
	*this = src;
	return ;
}

// destructor
Fixed::~Fixed (void) {
	std::cout << RED "Destruction called" NC << std::endl;
	return ;
}

// operator overload
Fixed& Fixed::operator=(Fixed const& rhs) {
	std::cout << YEL "Copy assignment operator called" NC << std::endl;
	this->m_fixedValue = rhs.getRawBits();
	return *this;
}

// getter
int Fixed::getRawBits(void) const {
	std::cout << YEL "getRawBits member function called" NC << std::endl;
	return (this->m_fixedValue);
}

// setter
void Fixed::setRawBits(int const raw){
	this->m_fixedValue = raw;
	return ;
}