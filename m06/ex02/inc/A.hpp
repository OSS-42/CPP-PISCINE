/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:11:07 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/17 14:23:43 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "../inc/Base.hpp"
# include "../inc/A.hpp"

class A : public Base {
	public:
		A();
		~A();

	
	private:
		A(const A& other);
		A& operator=(const A& rhs);
};

#endif