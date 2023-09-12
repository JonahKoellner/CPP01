/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:40:10 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/12 12:51:50 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ){
	this->name = name;
}

void Zombie::announce( void ){
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Destructing " << name << std::endl;
}
