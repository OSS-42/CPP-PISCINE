/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:57:18 by ewurstei          #+#    #+#             */
/*   Updated: 2023/05/23 16:17:23 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/Array.hpp"

int main( void ) {

try {
	
	std::cout << MAG "---- TABLES SIZES ----" NC << std::endl;
	Array<int> arr1;
    std::cout << "Size of arr1: " << arr1.size() << " -> ";
	if (arr1.size() == 0) 
		std::cout << "✅" << "\n" << std::endl;
	else
		std::cout << "💥" << "\n" << std::endl;

    // Test array of size 10
    Array<int> arr2(10);
    std::cout << "Size of arr2: " << arr2.size() << " -> ";
	if (arr2.size() == 10) 
		std::cout << "✅" << "\n" << std::endl;
	else
		std::cout << "💥" << "\n" << std::endl;

    // Test copy constructor
    Array<int> arr3(arr2);
    std::cout << "Size of arr3: " << arr3.size() << " -> ";
	if (arr3.size() == 10) 
		std::cout << "✅" << "\n" << std::endl;
	else
		std::cout << "💥" << "\n" << std::endl;

    // Test assignment operator
    Array<int> arr4 = arr2;
    std::cout << "Size of arr4: " << arr4.size() << " -> ";
	if (arr4.size() == 10) 
		std::cout << "✅" << "\n" << std::endl;
	else
		std::cout << "💥" << "\n" << std::endl;

    // Test array of different type
    Array<double> arr5(5);
    std::cout << "Size of arr5: " << arr5.size() << " -> ";
	if (arr5.size() == 5) 
		std::cout << "✅" << "\n" << std::endl;
	else
		std::cout << "💥" << "\n" << std::endl;
	
	std::cout << MAG "---- DEEP COPY TESTS ----" NC << "\n" << std::endl;
	
	Array<int> arr6(1);
	arr6[0] = 42;
	Array<int> arr7(arr6);
	std::cout << "initial value : " << arr6[0] << std::endl;
	std::cout << "initial size : " << arr6.size() << "\n" << std::endl;
	std::cout << "copy value : " << arr7[0] << std::endl;
	std::cout << "copy size : " << arr7.size() << "\n" << std::endl;
	
	std::cout << ">>> changing initial value to 666 <<<" << "\n" << std::endl;
	arr6[0] = 666;
	std::cout << "new value : " << arr6[0] << std::endl;
	std::cout << "copy value : " << arr7[0] << "\n" << std::endl;
	

	return 0;
}
catch (...) {
	std::cout << RED ">>> Unexpected error <<<" NC << std::endl;
}

}