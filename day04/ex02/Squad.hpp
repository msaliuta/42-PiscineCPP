/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaliuta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:15:56 by msaliuta          #+#    #+#             */
/*   Updated: 2019/12/07 20:15:57 by msaliuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
# define SQUAD_H

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class	Squad : public ISquad
{

	typedef struct _marinelist
	{
		ISpaceMarine 			*marine;
		struct _marinelist		*next;
	}				t_marinelist;

	public:

		Squad(void);
		Squad(Squad &obj);
		virtual ~Squad(void);
		Squad &operator=(Squad const &r);

		int				getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int				push(ISpaceMarine*);

	private:
		int					_unit;
		struct _marinelist	*_marine;
};

#endif
