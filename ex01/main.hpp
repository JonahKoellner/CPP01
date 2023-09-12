/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:56:56 by jkollner          #+#    #+#             */
/*   Updated: 2023/09/12 13:08:13 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
#pragma once

#include <string>
#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

#endif
