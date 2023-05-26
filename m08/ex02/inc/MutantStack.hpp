/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/26 15:21:49 by ewurstei         ###   ########.fr       */
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
class MutantStack {
	public:
		MutantStack() : m_stack()						{ };
		MutantStack(const MutantStack& other)			{*this = other;};
		MutantStack& operator=(const MutantStack& rhs)	{if (this == &rhs) return (*this); return *this;}
		~MutantStack()									{ };

		size_t	size(void) const {
			return m_stack.size();
		}
		
		void	push(const T& value) {
			m_stack.push(value);
		}

		void	pop(void) const {
			m_stack.pop(value);
		}

		void	top(void) const {
			m_stack.top(value);
		}

	private:
		std::stack<T>	m_stack;

};

#endif