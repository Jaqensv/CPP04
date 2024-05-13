/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:30:28 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/13 13:50:37 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>
# include "Brain.class.hpp"

class Animal {
    
public:
    Animal();
    Animal(Animal const &src);
    virtual ~Animal();
    virtual void makeSound() const = 0;
    std::string getType() const;
    Animal &operator=(Animal const &rhs);
protected:
    std::string _type;

};

#endif