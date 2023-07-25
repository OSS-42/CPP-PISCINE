/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 09:17:52 by ewurstei          #+#    #+#             */
/*   Updated: 2023/04/11 14:27:45 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <cctype>
# include <locale>

int	main (int argc, char **argv)
{
	int	av;

	av = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[++av])
	{
		std::locale loc;
		std::string str (argv[av]);
		std::size_t size = str.size();
		for (unsigned long i = 0; i < size; i++) {
			std::cout << toupper(str[i], loc);
		}
	}
	std::cout << std::endl;
	return (0);
}
