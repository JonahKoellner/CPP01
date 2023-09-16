/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:06:44 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/15 09:57:00 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;
	std::string test = brain;

	brain = "Not brain";

	std::cout << &brain << " << Memory Address | Value >> " << brain << std::endl;
	std::cout << stringPTR << " << Memory Address | Value >> " << *stringPTR << std::endl;
	std::cout << &stringREF << " << Memory Address | Value >> " << stringREF << std::endl;
	std::cout << &test << " << Memory Address | Value >> " << test << std::endl;
	return (0);
}
