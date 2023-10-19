/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:13:12 by rficht            #+#    #+#             */
/*   Updated: 2023/10/17 17:10:20 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP 

# include "MateriaSource.hpp"

class Cure : public AMateria
{
private:
	/* data */
public:
	Cure();
	Cure(const Cure& rhs);
	~Cure();
	Cure* clone() const;
	void use(ICharacter& target);
	Cure& Cure::operator = (const Cure& rhs);
};

#endif
