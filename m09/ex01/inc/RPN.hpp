/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/26 11:32:13 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

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

class RPN {
	public:
		RPN();
		RPN(unsigned int N);
		RPN(const RPN& other);
		RPN& operator=(const RPN& rhs);
		~RPN();

		unsigned int 	getSize(void) const;
		unsigned int	getValue1(void) const;
		unsigned int	getValue2(void) const;
		void			printValues(void) const;
		void 			addNumber(unsigned int N);
		void			addBigNumbers(void);
		
		unsigned int 	shortestRPN(void);
		unsigned int 	longestRPN(void);

	private:
		std::vector<unsigned int>	m_vec;

};

#endif