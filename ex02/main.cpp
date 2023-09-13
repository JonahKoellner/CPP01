/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:06:44 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/13 13:14:08 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << &brain << " << Memory Address | Value >> " << brain << std::endl;
	std::cout << stringPTR << " << Memory Address | Value >> " << *stringPTR << std::endl;
	std::cout << &stringREF << " << Memory Address | Value >> " << stringREF << std::endl;

	return (0);
}
