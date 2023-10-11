/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:13:42 by rficht            #+#    #+#             */
/*   Updated: 2023/10/11 15:38:21 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP 

# include "AMateria.hpp"
# include "Character.hpp"

class Ice : public AMateria
{
private:
	/* data */
public:
	Ice();
	~Ice();
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif