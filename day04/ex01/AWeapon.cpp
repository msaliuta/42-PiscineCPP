/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:12:16 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:12:17 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _dmg(damage), _ap(apcost)
{
	return;
}

AWeapon::AWeapon(AWeapon &obj)
{
	*this = obj;
	return;
}

AWeapon::~AWeapon(void)
{
	return;
}

AWeapon &AWeapon::operator=(AWeapon const &r) 
{
	this->_name = r._name;
	this->_ap = r._ap;
	this->_dmg = r._dmg;
	return (*this);
}

std::string		AWeapon::getName() const
{
	return (this->_name);
}

int				AWeapon::getDamage() const
{
	return (this->_dmg);
}

int				AWeapon::getAPCost() const
{
	return (this->_ap);
}
