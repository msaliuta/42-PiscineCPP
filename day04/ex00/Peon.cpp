/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:05:50 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:05:52 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(Peon &obj) : Victim(obj)
{
	*this = obj;
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return;
}

Peon &Peon::operator=(Peon const &r) 
{
	this->_name = r._name;
	return (*this);
}

std::string		Peon::getName(void) const
{
	return (this->_name);
}

std::ostream	&operator<<(std::ostream &o, Peon const &r)
{
	o << "I'm " << r.getName() << " and I like otters!" << std::endl;
	return (o);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
	return;
}
