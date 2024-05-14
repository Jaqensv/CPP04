/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:09:44 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/14 14:48:31 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include "AMateria.class.hpp"

class Ice : public AMateria {

public:
    Ice();
    Ice(Ice const &src);
    ~Ice();
    Ice &operator=(Ice const &rhs);
    virtual Ice* clone() const;
    
};



#endif