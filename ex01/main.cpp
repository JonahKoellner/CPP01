/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:12:00 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/12 13:26:37 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "main.hpp"

int main( void )
{
	Zombie *zh = zombieHorde(10, "nameless");

	for (int i = 0; i < 10; i++){
		zh[i].announce();
	}
	delete[] zh;
	return 0;
}

