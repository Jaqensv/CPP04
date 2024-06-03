/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:30:28 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/01 14:49:41 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
    
public:
    Animal();
    Animal(Animal const &src);
    ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
    Animal &operator=(Animal const &rhs);
protected:
    std::string _type;
};

#endif