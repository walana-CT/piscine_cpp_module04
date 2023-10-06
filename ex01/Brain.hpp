/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:34:44 by rficht            #+#    #+#             */
/*   Updated: 2023/10/06 17:12:23 by rficht           ###   ########.fr       */
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
	Brain(const std::string& owner);
	Brain(const Brain& brain);
	~Brain();
	Brain & operator = (Brain const & rhs);

	std::string GetIdea(int i) const;
};

#endif
