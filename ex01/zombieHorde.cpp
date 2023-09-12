/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:06:25 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/12 13:26:40 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ){
	Zombie* zh = new Zombie[N];

	for (int i = 0; i < N; i++){
		zh[i] = Zombie(name);
	}
	return (zh);
}
