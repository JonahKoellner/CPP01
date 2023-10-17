/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:24:37 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/10/17 17:05:11 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain( std::string level ){
	std::string level_names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcPointers[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int lvl;
	for (int i = 0; i < 4; i++)
	{
		if (level == level_names[i])
			lvl = i;
	}

	switch (lvl)
	{
	case DEBUG:
		(this->*funcPointers[0])();
	case INFO:
		(this->*funcPointers[1])();
	case WARNING:
		(this->*funcPointers[2])();
	case ERROR:
		(this->*funcPointers[3])();
		break;
	default:
		std::cout << "[ Nothing to complain ]" << std::endl;
		break;
	}
}

void Harl::debug( void ){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}

void Harl::warning( void ){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
}

void Harl::error( void ){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
