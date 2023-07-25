/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/21 13:21:41 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

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

//Class
class ClapTrap {
	public :
		ClapTrap (std::string name);			// constructor
		ClapTrap (const ClapTrap& src);			//copy
		ClapTrap (void); 						// default constructor
		~ClapTrap (void);						//destructor

		ClapTrap& operator=(ClapTrap const& other); //operator overload
		
		std::string		getName(void) const;
		unsigned int	getHP(void) const;
		unsigned int	getMP(void) const;
		unsigned int	getAD(void) const;
		void			setName(std::string newName);
		void			setHP(unsigned int newHP);
		void			setMP(unsigned int newMP);
		void			setAD(unsigned int newAD);

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

	private :
		
		std::string	m_name;
		int			m_HP;
		int			m_MP;
		int			m_AD;
};

#endif