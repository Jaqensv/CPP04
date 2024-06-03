/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:30:28 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/03 18:02:36 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {
    
public:
    Animal();
    Animal(Animal const &src);
    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
    Animal &operator=(Animal const &rhs);
protected:
    std::string _type;
};

#endif