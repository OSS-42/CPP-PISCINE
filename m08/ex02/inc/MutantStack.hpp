/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/29 15:15:30 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

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
# include <stack>

template <class T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack()									{ };
		MutantStack(const MutantStack& other)			{*this = other;};
		MutantStack& operator=(const MutantStack& rhs)	{if (this == &rhs) return (*this); return *this;};
		~MutantStack()									{ };

		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator	begin(void)							{ return std::stack<T>::c.begin(); };
		iterator	end(void)							{ return std::stack<T>::c.end(); };

	private:

};

#endif