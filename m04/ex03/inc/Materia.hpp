/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:59:37 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/02 16:13:46 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

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

class ICharacter;
class IMateriaSource;

class AMateria {
	protected:
		std::string	m_type;

	public :
		AMateria ();
		AMateria (std::string const& type);
		AMateria (const AMateria& other);
		AMateria& operator= (const AMateria& rhs);
		virtual ~AMateria ();

		std::string const& getType() const; //Returns the materia type
		
		virtual AMateria* clone () const = 0;
		virtual void use(ICharacter& target);
};

#endif