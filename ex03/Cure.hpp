/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:14:46 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/03 18:09:00 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "Materia.hpp"

class Cure : public AMateria {

public:
    Cure();
    Cure(Cure const &src);
    ~Cure();
    Cure &operator=(Cure const &rhs);
    virtual AMateria* clone() const;
};

#endif