/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:18:03 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/03 17:38:17 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "Materia.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter {
	public :
		// Character (void);
		Character (std::string name);
		Character (const Character& other);
		Character&	operator= (const Character& rhs);
		~Character (void);
	
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		int		checkInventoryEmpty(void) const;
		void	toDropInventory(AMateria* m);

	protected :
		AMateria*	m_inventory[4];
		AMateria*	m_dropInventory[128];

	private :
		std::string	m_name;
		int			m_idxInventory;
	
};

#endif