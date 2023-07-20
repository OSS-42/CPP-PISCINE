/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/07/20 09:57:46 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <deque>
#include <iostream>
#include <list>

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
# include <ctime>


struct Pair {
	size_t	first;
	size_t	second;
};

class PmergeMe {
	public:
		PmergeMe(std::list<double> arglist);
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& rhs);
		~PmergeMe();
		
		template<typename T>
		void fordJohnsonSort(T& container);

	private:
		std::vector<double>		m_vectorStack;
		std::deque<double>		m_dequeStack;
		size_t					m_vectorTime;
		size_t					m_dequeTime;

};
