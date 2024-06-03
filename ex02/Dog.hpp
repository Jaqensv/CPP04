/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:21:18 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/03 17:27:53 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {

public:
    Dog();
    Dog(Dog const &src);
    ~Dog();
    Dog &operator=(Dog const &rhs);
    void makeSound() const;
private:
    Brain *_brain;
};

#endif