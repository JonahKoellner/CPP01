/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:36:55 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/12 13:20:43 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	void announce( void );
	Zombie* newZombie( std::string name );
	void randomChump( std::string name );
	Zombie( std::string name );
	Zombie();
	~Zombie();
};
