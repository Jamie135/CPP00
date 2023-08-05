/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:46:55 by pbureera          #+#    #+#             */
/*   Updated: 2023/08/05 15:46:55 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	Phonebook	Phonebook;
	std::string	command;

	Phonebook.instruction();
	while (std::getline(std::cin, command))
	{
		if (command == "ADD")
			Phonebook.add_contact();
		else if (command == "EXIT")
		{
			std::cout << "Exit" << std::endl;;
			break;
		}
		Phonebook.instruction();
	}
	return (0);
}
