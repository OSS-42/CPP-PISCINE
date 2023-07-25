/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 09:55:46 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/02 15:42:05 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "Materia.hpp"
# include "MateriaSource.hpp"
# include "Character.hpp"

class Cure : public AMateria {
	public :
		Cure (void);
		Cure (const Cure& other);
		Cure& operator= (const Cure& rhs);
		~Cure (void);
	
		Cure* clone () const;
		void use(ICharacter& target);
		
	protected :

	private :
};

#endif