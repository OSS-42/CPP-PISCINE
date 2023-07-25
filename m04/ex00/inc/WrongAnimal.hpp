/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/27 10:53:18 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

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

class WrongAnimal {
	public :
		WrongAnimal (void); 					// default constructor
		WrongAnimal (std::string type);		// constructor
		WrongAnimal (const WrongAnimal& src);		// copy
		virtual ~WrongAnimal (void);					// destructor

		WrongAnimal& operator=(WrongAnimal const& other); //operator overload

		std::string	getType(void) const ;

		void makeSound (void) const;

	protected :
		std::string	m_type;

	private :

};

#endif