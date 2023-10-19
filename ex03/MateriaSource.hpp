/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:29:10 by rficht            #+#    #+#             */
/*   Updated: 2023/10/19 15:35:09 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* known[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& m);
	~MateriaSource();

	MateriaSource& operator=(MateriaSource const & rhs);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
	AMateria* getKnown(int idx) const;
};

#endif
