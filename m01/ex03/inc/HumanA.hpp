/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/03 14:25:34 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "../inc/Weapon.hpp"

//Class
class HumanA {
		public :

		// mandatory
			HumanA (std::string name, Weapon& weapon); 	// Constructeur
			~HumanA(void);				// Destructor

		// accessor - getter
			std::string		getName(void) const;

		// accessor - setter
			void	setName(std::string name);

		// other
			void	attack(void) const;

		private :
			std::string	m_name;
			Weapon&		m_type;
};

#endif