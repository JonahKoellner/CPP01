/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:26:06 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/13 13:38:08 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		std::string weapon;
	public:
		HumanB(std::string name, Weapon weap);
		HumanB(std::string name);
		void setWeapon(Weapon weap);
		void attack();
};
