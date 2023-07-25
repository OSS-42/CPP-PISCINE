/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:12:00 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/02 15:42:13 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "Materia.hpp"
# include "MateriaSource.hpp"
# include "Character.hpp"

class Ice : public AMateria {
	public :
		Ice (void);
		Ice (const Ice& other);
		Ice& operator= (const Ice& rhs);
		virtual ~Ice (void);
	
		Ice* clone () const;
		void use(ICharacter& target);
		
	protected :

	private :
};

#endif