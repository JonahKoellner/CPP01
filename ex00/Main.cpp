/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:44:46 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/12 12:59:58 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>
#include "Main.hpp"

int main( void )
{
	Zombie* zp = newZombie("Kevin");
	zp->announce();
	randomChump("Martin");

	delete zp;
	return 0;
}

