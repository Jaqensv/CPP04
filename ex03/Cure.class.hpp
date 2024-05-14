/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:14:46 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/14 14:48:39 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include "AMateria.class.hpp"

class Cure : public AMateria {

public:
    Cure();
    Cure(Cure const &src);
    ~Cure();
    Cure &operator=(Cure const &rhs);
    virtual Cure* clone() const;


};



#endif