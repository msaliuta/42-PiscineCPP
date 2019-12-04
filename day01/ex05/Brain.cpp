/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:31:25 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/04 22:32:45 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{
	_thoughts = "no thoughts in this brain";
}

Brain::Brain(std::string thoughts)
{
	_thoughts = thoughts;
}

Brain::~Brain()
{
}

std::string Brain::identify() const
{
	const void *location = static_cast<const void*>(this);
	std::stringstream adr;
	adr << location;
	std::string addres = adr.str();
	if (addres.length() > 2)
		for(int i = 2; i < addres.length(); i++)
			addres[i] = toupper(addres[i]);
	return (addres);
}
