/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:05:58 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/10 10:47:39 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Harl.hpp"

int	main(void) {
	
	Harl pasContent;

	pasContent.complain("DEBUG");
	pasContent.complain("SALUT");
	pasContent.complain("INFO");
	pasContent.complain("BYEBYE");
	pasContent.complain("WARNING");
	pasContent.complain("ZUT");
	pasContent.complain("ERROR");
	pasContent.complain("SOUPE");
	
	return (0);
}
