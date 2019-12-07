/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:18:16 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:18:17 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type), _xp(0)
{
	return;
}

AMateria::AMateria(AMateria &obj)
{
	*this = obj;
	return;
}

AMateria::~AMateria(void)
{
	return;
}

AMateria &AMateria::operator=(AMateria const &r) 
{
	this->_type = r._type;
	return (*this);
}

std::string	const		&AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int			AMateria::getXP(void) const
{
	return (this->_xp);
}

void					AMateria::setType(std::string type)
{
	this->_type = type;
	return;
}

void					AMateria::setXP(unsigned int xp)
{
	this->_xp = xp;
	return;
}

void					AMateria::use(ICharacter& target)
{
	(void) target;
	this->_xp = this->_xp + 10;
	return;
}

void					AMateria::increaseXP(void)
{
	this->_xp = this->_xp + 10;
	return;
}
