/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:06:47 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:06:49 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Victim.hpp"
#include "Peon.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return;
}

Victim::Victim(Victim &obj)
{
	*this = obj;
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return;
}

Victim &Victim::operator=(Victim const &r) 
{
	this->_name = r._name;
	return (*this);
}

std::string		Victim::getName(void) const
{
	return (this->_name);
}

std::ostream	&operator<<(std::ostream &o, Victim const &r)
{
	o << "I'm " << r.getName() << " and I like otters!" << std::endl;
	return (o);
}

void	Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
	return;
}
