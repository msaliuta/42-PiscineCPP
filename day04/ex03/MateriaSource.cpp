/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:20:10 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:20:12 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) 
{
	this->_mat[0] = NULL;
	this->_mat[1] = NULL;
	this->_mat[2] = NULL;
	this->_mat[3] = NULL;
	return;
}

MateriaSource::MateriaSource(MateriaSource &obj)
{
	this->_mat[0] = obj._mat[0];
	this->_mat[1] = obj._mat[0];
	this->_mat[2] = obj._mat[0];
	this->_mat[3] = obj._mat[0];
	return;
}

MateriaSource::~MateriaSource(void)
{
	delete this->_mat[0];
	delete this->_mat[1];
	delete this->_mat[2];
	delete this->_mat[3];
	return;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &r) 
{
	this->_mat[0] = r._mat[0];
	this->_mat[1] = r._mat[0];
	this->_mat[2] = r._mat[0];
	this->_mat[3] = r._mat[0];
	return (*this);
}

void 		MateriaSource::learnMateria(AMateria *obj)
{
	int i = 0;

	while (i < 4)
	{
		if (this->_mat[i] == NULL)
		{
			// this->_mat[i] = new *AMateria;
			this->_mat[i] = obj;
			i = 5;
		}
		else
			i++;
	}
	if (i == 4)
	{
		std::cout << "There is not enough room to learn a new Materia" << std::endl;
	}
}

AMateria* 	MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	AMateria *ret;

	while (i < 4)
	{
		if (this->_mat[i] != NULL)
		{
			if (this->_mat[i]->getType() == type)
			{
				ret = this->_mat[i]->clone();
				return (ret);
			}
		}
		i++;
	}
	std::cout << "Materia Type is invalid" << std::endl;
	return (NULL);
}
