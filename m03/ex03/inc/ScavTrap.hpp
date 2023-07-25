/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:42:37 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/21 11:46:15 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

// COLOURS CODES
# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define CYN "\e[0;36m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define REDB "\e[41m"

// Class
class ScavTrap : virtual public ClapTrap {
	public :
		ScavTrap (void); 						// default constructor
		ScavTrap (std::string name);			// constructor
		ScavTrap (const ScavTrap& src);			//copy
		~ScavTrap (void);						//destructor

		ScavTrap& operator=(ScavTrap const& other);

		void	attack(const std::string& target);
		void	guardGate();
};

#endif