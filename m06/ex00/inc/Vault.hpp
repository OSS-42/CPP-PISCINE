/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vault.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:58:45 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/16 15:44:48 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VAULT_HPP
# define VAULT_HPP

// COLOURS CODES
# define NC "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define REDB "\e[41m"

# include <iostream>
# include <string>
# include <sstream>
# include <cctype>
# include <limits>

class Vault {
	public:
		Vault();
		~Vault();

		int		getInt(void) const;
		float	getFloat(void) const;
		double	getDouble(void) const;
		char	getChar(void) const;

		void	setInt(std::string value);
		void	setFloat(std::string value);
		void	setDouble(std::string value);
		void	setChar(std::string value);
		
	private:
		Vault (const Vault& other);
		Vault& operator=(const Vault& rhs);
	
		int		m_intValue;
		float	m_fltValue;
		double	m_dblvalue;
		char	m_chrValue;
};

std::ostream& operator<<(std::ostream& o, const Vault& value);

#endif