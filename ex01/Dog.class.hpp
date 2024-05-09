/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:21:18 by mde-lang          #+#    #+#             */
/*   Updated: 2024/04/16 03:12:54 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "Animal.class.hpp"

class Dog : public Animal {

public:
    Dog();
    Dog(Dog const &src);
    ~Dog();
    Dog &operator=(Dog const &rhs);
    void makeSound() const override;
};


#endif