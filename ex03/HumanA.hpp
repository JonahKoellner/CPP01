/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:28:46 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/13 13:38:11 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"
#include <iostream>

class HumanA{
	private:
		std::string name;
		Weapon weapon;
	public:
		HumanA(std::string name, Weapon weap);
		void setWeapon(Weapon weap);
		void attack();
};
