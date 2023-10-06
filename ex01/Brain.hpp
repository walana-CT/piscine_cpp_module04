/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:34:44 by rficht            #+#    #+#             */
/*   Updated: 2023/10/06 17:44:33 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP 

# include <iostream>
# include <string>

class Brain
{
protected:
	std::string _ideas[100];
private:
	/* data */
public:
	Brain();
	Brain(const std::string& idea);
	Brain(const Brain& brain);
	~Brain();
	Brain & operator = (Brain const & rhs);

	std::string getIdea(int i) const;
};

#endif
