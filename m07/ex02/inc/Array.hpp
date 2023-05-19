/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/19 18:32:43 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

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

template<typename T>
class Array<T> {
	public:
		Array() 							{ m_array = new T [0]; }
		Array(unsigned int n)				{ m_array = new T [n]; }
		Array(const Array& other)			{ m_array = new T [other.size()];
											  for (size_t i = 0; i < other.size(); i++) {this->m_array[i] = other.m_array[i];} }
		Array& operator=(const Array& rhs)	{ *m_array = *rhs.m_array; return *this;}
		~Array()							{ delete [] m_array; }

		const unsigned_int size() const		{ return }
		
	private:
		T*	m_array;
};

#endif



// template<typename T>
// class Array {
// 	public:
// 		Array() : m_array(new T [0]), m_size(0) { }

// 		Array(unsigned int n) : m_array(new T [n]), m_size(n) { }

// 		Array(const Array& other) : m_array(new T [other.m_size]), m_size(other.m_size) {
// 			for (size_t i = 0; i < other.m_size; i++) {
// 				this->m_array[i] = other.m_array[i];
// 			}
// 		}

// 		Array& operator=(const Array& rhs) {
// 			if (this != &rhs) { // protect against invalid self-assignment
// 				delete[] m_array; // delete old array
// 				m_size = rhs.m_size;
// 				m_array = new T[m_size]; // create new array
// 				for (size_t i = 0; i < m_size; i++) {
// 					m_array[i] = rhs.m_array[i]; // copy elements
// 				}
// 			}
// 			return *this;
// 		}

// 		~Array() { delete [] m_array; }

// 		size_t size() const { return m_size; }
		
// 	private:
// 		T*	m_array;
// 		size_t m_size;
// };