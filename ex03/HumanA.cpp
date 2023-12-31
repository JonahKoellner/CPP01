/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:33:08 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/15 10:55:15 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weap) : weapon(weap){
	this->name = name;
}

void HumanA::attack(){
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
