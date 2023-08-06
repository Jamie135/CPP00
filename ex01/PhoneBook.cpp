/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:45:41 by pbureera          #+#    #+#             */
/*   Updated: 2023/08/05 15:45:41 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	this->_full = false;
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void	PhoneBook::instruction()
{
	std::cout << "Enter your command [ADD, SEARCH, EXIT]:" << std::endl;
}

void	PhoneBook::add_contact()
{
	std::string input;
	
	if (this->_full == false)
	{
		std::cout << "This is your contact #" << this->_index + 1 << std::endl;
		this->_contacts[this->_index].set_contact() == true
		if (this->_index == 7)
			this->_full = true;
		else
			this->_index++;
	}
	else
	{
		std::cout << "Your phonebook is full.\nReplacing with contact #1." << std::endl;
		getline(std::cin, input);
		for (int i = 1; i < 8; i++)
			this->_contacts[i - 1] = this->_contacts[i];
		std::cout << "This is your contact #8" << std::endl;
		this->_contacts[this->_index].set_contact();
	}
}
