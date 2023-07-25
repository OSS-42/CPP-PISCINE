/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/03 16:09:29 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "../inc/Weapon.hpp"

//Class
class HumanB {
		public :

		// mandatory
			HumanB(std::string name); 	// Constructeur
			~HumanB(void);				// Destructor

		// accessor - getter
			std::string		getName(void) const;

		// accessor - setter
			void	setName(std::string name);
			void	setWeapon(Weapon &newType);

		// other
			void	attack(void) const;

		private :
			std::string	m_name;
			Weapon*		m_type;
};

#endif