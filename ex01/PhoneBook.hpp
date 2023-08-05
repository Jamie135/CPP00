/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:43:37 by pbureera          #+#    #+#             */
/*   Updated: 2023/08/05 15:43:37 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class Phonebook
{
private:
	Contact	_contact[8];
	int		_i;
	bool	_full;
public:
	Phonebook();
	~Phonebook();

	void	instruction();
	void	add_contact();
};

#endif
