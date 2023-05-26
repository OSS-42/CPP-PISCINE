/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/26 00:12:54 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

// COLOURS CODES
# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define REDB "\e[41m"

# include <iostream>
# include <iomanip>
# include <string>
# include <algorithm>
# include <vector>

class Span {
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& rhs);
		~Span();

		unsigned int 	getSize(void) const;
		void			printValues(void) const;
		void 			addNumber(unsigned int N);
		void			addBigNumbers(void);
		
		unsigned int 	shortestSpan(void);
		unsigned int 	longestSpan(void);

	private:
		unsigned int				m_size;
		std::vector<unsigned int>	m_vec;

};

#endif