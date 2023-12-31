/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:06:39 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/09/16 12:33:33 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char *argv[]){

	/// Check programm arguments
	if (argc != 4)
		return (std::cout << "Input error! (" << argv[0] << " <file_name> <find> <replace>)" << std::endl, 1);
	std::string to_replace(argv[2]);
	if (to_replace == "")
		return (std::cout << "This is no replaceable string!" << std::endl, 1);
	std::string replacement(argv[3]);

	/// Open file
	std::string file_name(argv[1]);
	std::ifstream file(file_name);
	if (file.fail())
		return (std::cout << file_name << " <--- File not found! (" << argv[0] << " <file_name> <find> <replace>)" << std::endl, 1);

	/// Read file content and store
	std::stringstream file_content;
	if (!file.is_open()){
		file.open(file_name);
		if (file.fail())
			return (std::cout << "File closed unexpected and cant be reopened!" << std::endl, 1);
	}
	file_content << file.rdbuf();
	std::string content (file_content.str());
	file.close();

	// Prevent infinite loop (when searching and replacing the same thing)
	if (!(to_replace == replacement)){
		/// Replace algorithm
		std::string::size_type found_pos = content.find(to_replace, 0);
		while (found_pos != std::string::npos){
			content.erase(found_pos, to_replace.length());
			content.insert(found_pos, replacement);
			std::cout << content;
			found_pos = content.find(to_replace, found_pos + replacement.length());
		}
	}

	/// Replace ending for out file name
	std::string::size_type ending = file_name.find_last_of('.');
	std::string replace_file_name;
	if (ending != std::string::npos)
		replace_file_name = file_name.substr(0,ending)+".replace";
	else
		replace_file_name = file_name + ".replace";

	/// Fill replaced content
	std::ofstream file_replace (replace_file_name);
	if (file_replace.fail())
		return (std::cout << "Couldn't create replace file! Aborting..." << std::endl, 1);
	file_replace << content;
	file_replace.close();
	return (0);
}
