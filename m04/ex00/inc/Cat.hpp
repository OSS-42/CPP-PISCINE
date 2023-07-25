/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:07:06 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/26 16:03:56 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "../inc/Animal.hpp"

class Cat : public Animal {
	public:
		Cat (void) ;
		Cat (std::string name);
		Cat (const Cat& other);
		~Cat (void);

		Cat& operator=(Cat const& rhs);

		void makeSound (void) const;

	protected:

	private:

};

#endif