/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:11:22 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/17 14:23:58 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "../inc/Base.hpp"
# include "../inc/C.hpp"

class C : public Base {
	public:
		C();
		~C();
	
	private:
		C(const C& other);
		C& operator=(const C& rhs);
};

#endif