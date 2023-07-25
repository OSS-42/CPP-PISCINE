/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:07:16 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/28 17:20:49 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../inc/Animal.hpp"
# include "../inc/Brain.hpp"

class Dog : public AAnimal {
	public :
		Dog (void);
		Dog (std::string type);
		Dog (const Dog& other);
		~Dog (void);

		Dog& operator=(const Dog& rhs);

		void	makeSound(void) const;
		void	getBrain(void) const;

	protected :

	private :
		Brain* m_dogBrain;
};

#endif