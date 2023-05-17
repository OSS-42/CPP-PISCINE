/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:11:15 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/17 14:23:56 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "../inc/Base.hpp"
# include "../inc/B.hpp"

class B : public Base {
	public:
		B();
		~B();
	
	private:
		B(const B& other);
		B& operator=(const B& rhs);
};

#endif