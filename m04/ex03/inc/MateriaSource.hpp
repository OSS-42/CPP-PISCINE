/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:19:07 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/03 10:04:50 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "Materia.hpp"

class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource (void);
		MateriaSource (const MateriaSource& other);
		MateriaSource& operator= (const MateriaSource& rhs);
		~MateriaSource (void);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	protected:
		AMateria*	m_sourceInventory[4];
		int			m_idxSourceInventory;

	private:
};

#endif