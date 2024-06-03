/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:09:44 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/03 18:08:40 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "Materia.hpp"

class Ice : public AMateria {

public:
    Ice();
    Ice(Ice const &src);
    ~Ice();
    Ice &operator=(Ice const &rhs);
    virtual AMateria* clone() const;
};

#endif