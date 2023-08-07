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

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	this->_full = false;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	PhoneBook::instruction(void)
{
	std::cout << "Enter your command [ADD, SEARCH, EXIT]:" << std::endl;
}

void	PhoneBook::add_contact(void)
{
	std::string input;
	
	if (this->_full == false)
	{
		std::cout << "This is your contact #" << this->_index + 1 << std::endl;
		this->_contact[this->_index].set_contact();
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
			this->_contact[i - 1] = this->_contact[i];
		std::cout << "This is your contact #8" << std::endl;
		this->_contact[this->_index].set_contact();
	}
}

static void display_column(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}

void	PhoneBook::search_contact(void)const
{
	int	index;

	display_column();
	if (this->_index == 0)
		std::cout << "Need at least one contact before searching." << std::endl;
	else
	{
		std::string input;
		for (int i = 0; i < this->_index; i++)
		{
			std::cout << '|'  << std::setw(10) << i << '|';
			this->_contact[i].data_display();
		}
		std::cout << "Enter index: ";
		while (!(std::getline(std::cin, input)) || input.length() > 1 || input.compare("0") < 0 || input.compare("8") > 0 || (std::atoi(input.c_str()) -1 >= this->_index && this->_full == false))
		{
			if (input.length() > 1 || input.compare("0") < 0 || input.compare("8") > 0)
			{
				std::cin.clear();
				std::cout << "\033[31mOnly digits in range of 1 to 8 are allowed.\033[0m\n";
				std::cout << "Please tell me which contact i should show you. (0 to quit searching)\nIndex: ";
			}
		}
	}
}
