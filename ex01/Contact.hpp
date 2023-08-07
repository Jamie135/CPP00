/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:43:42 by pbureera          #+#    #+#             */
/*   Updated: 2023/08/05 15:43:42 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Contact
{
private:
	std::string _firstname;
	std::string	_lastname;
	std::string _nickname;
	std::string _phone;
	std::string _secret;
public:
	Contact(void);
	~Contact(void);

	void		set_contact(void);
};

#endif