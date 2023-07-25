/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/03/30 11:39:06 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

// COLOURS CODES
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

//Class
class Zombie {
		public :

		// mandatory
			Zombie(void);				// Default
			Zombie(std::string name); 	// Constructeur
			~Zombie(void);				// Destructor

		// accessor - getter
			std::string		getName(void);

		// accessor - setter
			void	setName(std::string name);

		// other
			void	announce(void) const;

		private :
			std::string m_name;
};

// Zombies creation
	Zombie* zombieHorde(int N, std::string name);

#endif