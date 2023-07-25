/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/14 15:59:51 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

// COLOURS CODES
# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define CYN "\e[0;36m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define REDB "\e[41m"

//Class
class Fixed {
	public :
		Fixed (void);						//default constructor
		Fixed (const int	number);		//constructor const int
		Fixed (const float	number);		//constructor const float
		Fixed (const Fixed& src);			//copy
		~Fixed (void);						//destructor

		Fixed& operator=(Fixed const& rhs); //operator overload

		int getRawBits(void) const;
		float	toFloat(void) const;
		int	toInt(void) const;
		void setRawBits(int const raw);

	private :
		int					m_fixedValue;
		static const int	m_fracBits = 8;
};

std::ostream& operator<<(std::ostream& o, const Fixed& value);

#endif