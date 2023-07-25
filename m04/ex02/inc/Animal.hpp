/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/28 17:21:52 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

// COLOURS CODES
# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define CYN "\e[0;36m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define REDB "\e[41m"

class AAnimal {
	public :
		AAnimal (void); 					// default constructor
		AAnimal (std::string type);		// constructor
		AAnimal (const AAnimal& src);		// copy
		virtual ~AAnimal (void);					// destructor

		AAnimal& operator=(AAnimal const& other); //operator overload

		std::string	getType(void) const ;

		virtual void makeSound (void) const = 0;

	protected :
		std::string	m_type;

	private :

};

#endif