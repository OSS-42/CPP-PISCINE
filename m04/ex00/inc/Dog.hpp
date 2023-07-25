/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:07:16 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/26 16:03:52 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../inc/Animal.hpp"

class Dog : public Animal {
	public :
		Dog (void);
		Dog (std::string type);
		Dog (const Dog& other);
		~Dog (void);

		Dog& operator=(Dog const& rhs);

		void makeSound(void) const;

	protected :

	private :

};

#endif