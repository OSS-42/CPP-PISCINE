/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:05:57 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/28 17:06:05 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "../inc/Animal.hpp"

class Brain {
	public :
		Brain (void);
		Brain (const Brain& other);
		~Brain (void);
	
		Brain& operator= (const Brain& rhs);
		
	protected :
		std::string ideas[100];

	private :

};

#endif