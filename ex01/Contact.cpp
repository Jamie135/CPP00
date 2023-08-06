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

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	edit_contact(std::string str)
{
	std::string	command;

	std::cout << str;
	while (getline(std::cin, command))
	{
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
