/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:20:54 by rficht            #+#    #+#             */
/*   Updated: 2023/10/17 16:51:51 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class AMateria;

#ifndef AMATERIA_HPP
# define AMATERIA_HPP 

# include <iostream>
# include <string>

# include "Character.hpp"

class AMateria
{
private:
	std::string type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & rhs);	
	virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
	AMateria & operator = (AMateria const & rhs);
};

#endif
