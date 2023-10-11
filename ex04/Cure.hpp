/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:13:12 by rficht            #+#    #+#             */
/*   Updated: 2023/10/11 15:41:46 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP 

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
private:
	/* data */
public:
	Cure();
	~Cure();
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif
