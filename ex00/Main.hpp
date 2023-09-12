/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:56:56 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/12 12:59:53 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
#pragma once

#include <string>
#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump ( std::string name );

#endif
