/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:07:06 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/27 10:05:11 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "../inc/WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat (void) ;
		WrongCat (std::string name);
		WrongCat (const WrongCat& other);
		~WrongCat (void);

		WrongCat& operator=(WrongCat const& rhs);

		void makeSound (void) const;

	protected:

	private:

};

#endif