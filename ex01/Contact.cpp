/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:35:09 by pbureera          #+#    #+#             */
/*   Updated: 2023/08/05 16:35:09 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::display(std::string str) const
{
	if (str.size() > 10)
		return (str.substr(0,9) + '.');
	else
		return (str);
}

void	Contact::data_display(void) const
{
	std::cout << "His first name is " << this->_firstname << std::endl;
	std::cout << "His last name is " << this->_lastname << std::endl;
	std::cout << "His nickname is " << this->_nickname << std::endl;
	std::cout << "His phone number is " << this->_phone << std::endl;
	std::cout << "His darkest secret is " << this->_secret << std::endl;
}

void	Contact::data_contact(void) const
{
	std::cout << std::setw(10) << display(this->_firstname) << '|';
	std::cout << std::setw(10) << display(this->_lastname) << '|';
	std::cout << std::setw(10) << display(this->_nickname) << '|' << std::endl;
}

std::string	edit_contact(std::string str)
{
	std::string	command;

	std::cout << str;
	while (std::getline(std::cin, command) || !(std::getline(std::cin, command)))
	{
		if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D" << std::endl;
			std::exit(0);
		}
		if (command == "")
			std::cout << str;
		else
			break ;
	}
	return (command);
}

void	Contact::set_contact()
{
	this->_firstname = edit_contact("Enter first name : ");
	this->_lastname = edit_contact("Enter last name : ");
	this->_nickname = edit_contact("Enter nickname : ");
	this->_phone = edit_contact("Enter phone number : ");
	this->_secret = edit_contact("Enter darkest secret : ");
}
