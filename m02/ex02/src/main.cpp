/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/19 12:22:32 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Fixed.hpp"

int main( void ) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << (a < b) << std::endl;
	std::cout << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;
	std::cout << b << std::endl;
	std::cout << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}

// int	main(void)
// {
// 	//overload arithmetic operators

// 	Fixed a(10);
// 	Fixed b(32);
// 	Fixed c;
// 	std::cout << "overload arithmetic operators:" << std::endl;
// 	std::cout << "a: " << a << " and b: " << b << std::endl;
// 	c = a + b;
// 	std::cout << "c = a + b: " << c << std::endl;
// 	c = a - b;
// 	std::cout << "c = a - b: " << c << std::endl;
// 	c = a * b;
// 	std::cout << "c = a * b: " << c << std::endl;
// 	c = a / b;
// 	std::cout << "c = a / b: " << c << std::endl;
// 	std::cout << std::endl;

// 	//overload comparison operators

// 	bool compOperator;
// 	std::cout << "overload comparison operators:" << std::endl;
// 	compOperator = Fixed(1) > Fixed(0);
// 	std::cout << "1 > 0: " << compOperator << std::endl;
// 	compOperator = Fixed(0) > Fixed(1);
// 	std::cout << "0 > 1: " << compOperator << std::endl;

// 	compOperator = Fixed(1) < Fixed(0);
// 	std::cout << "1 < 0: " << compOperator << std::endl;
// 	compOperator = Fixed(0) < Fixed(1);
// 	std::cout << "0 < 1: " << compOperator << std::endl;

// 	compOperator = Fixed(1) >= Fixed(0);
// 	std::cout << "1 >= 0: " << compOperator << std::endl;
// 	compOperator = Fixed(1) >= Fixed(1);
// 	std::cout << "1 >= 1: " << compOperator << std::endl;

// 	compOperator = Fixed(1) <= Fixed(0);
// 	std::cout << "1 <= 0: " << compOperator << std::endl;
// 	compOperator = Fixed(1) <= Fixed(1);
// 	std::cout << "1 <= 1: " << compOperator << std::endl;

// 	compOperator = Fixed(1) == Fixed(0);
// 	std::cout << "1 == 0: " << compOperator << std::endl;
// 	compOperator = Fixed(1) == Fixed(1);
// 	std::cout << "1 == 1: " << compOperator << std::endl;

// 	compOperator = Fixed(1) != Fixed(0);
// 	std::cout << "1 != 0: " << compOperator << std::endl;
// 	compOperator = Fixed(1) != Fixed(1);
// 	std::cout << "1 != 1: " << compOperator << std::endl;
// 	std::cout << std::endl;

// 	//overload increment/decrement operators

// 	std::cout << "increment operators (0)" << std::endl;
// 	Fixed increment;
// 	std::cout << "increment: " << increment << std::endl;
// 	std::cout << "++increment: " << ++increment << std::endl;
// 	std::cout << "increment: " << increment << std::endl;
// 	std::cout << "increment++: " << increment++ << std::endl;
// 	std::cout << "increment: " << increment << std::endl;

// 	std::cout << "decrement operators (0)" << std::endl;
// 	Fixed decrement;
// 	std::cout << "decrement: " << decrement << std::endl;
// 	std::cout << "--decrement: " << --decrement << std::endl;
// 	std::cout << "decrement: " << decrement << std::endl;
// 	std::cout << "decrement--: " << decrement-- << std::endl;
// 	std::cout << "decrement: " << decrement << std::endl;
// 	std::cout << std::endl;

// 	//min max
// 	Fixed min;
// 	Fixed const max(Fixed(5.05f) * Fixed(2));
// 	std::cout << "min and max operator" << " "
// 	<< "min: " << min.toFloat() << " " << "and" << " "
// 	<< "max: " << max.toFloat() << std::endl;
// 	std::cout << "function min: " << Fixed::min(min, max) << std::endl;
// 	std::cout << "function max: " << Fixed::max(min, max) << std::endl;
// 	std::cout << std::endl;

// 	//bonus test from the pdf
// 	std::cout << "bonus test of the pdf that should match." << std::endl;
// 	Fixed x;
// 	Fixed const y( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << x << std::endl;
// 	std::cout << ++x << std::endl;
// 	std::cout << x << std::endl;
// 	std::cout << x++ << std::endl;
// 	std::cout << x << std::endl;
// 	std::cout << y << std::endl;
// 	std::cout << Fixed::max( x, y ) << std::endl;

// 	return 0;
// }

