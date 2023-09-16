/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:06:39 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/09/16 11:28:18 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char *argv[]){

	// Get programm arguments
	if (argc != 4)
		return (std::cout << "Input error! (" << argv[0] << " <file_name> <find> <replace>)" << std::endl, 1);

	// Open file
	std::string file_name(argv[1]);
	std::ifstream file(file_name);
	if (file.fail())
		return (std::cout << file_name << " <--- File not found! (" << argv[0] << " <file_name> <find> <replace>)" << std::endl, 1);

	// Read file content and store
	std::stringstream file_content;
	file_content << file.rdbuf();
	std::string content (file_content.str());
	file.close();

	// Replace algorithm
	std::string to_replace(argv[2]);
	std::string replacement(argv[3]);
	std::string::size_type found_pos = content.find(to_replace);
	while (found_pos != std::string::npos){
		content.erase(found_pos, to_replace.length());
		content.insert(found_pos, replacement);
		std::cout << content;
		found_pos = content.find(to_replace);
	}

	// Replace ending for file name
	std::string::size_type ending = file_name.find_last_of('.');
	std::string replace_file_name;
	if (ending != std::string::npos)
		replace_file_name = file_name.substr(0,ending)+".replace";
	else
		replace_file_name = file_name + ".replace";

	// Fille replaced content
	std::ofstream file_replace (replace_file_name);
	file_replace << content;
	file_replace.close();
	return (0);
}
