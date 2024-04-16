/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:00:54 by mde-lang          #+#    #+#             */
/*   Updated: 2024/04/16 03:20:56 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog() {
    this->_type = "Dog";
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src) {
    *this = src;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Ouaf ouaf!" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs) {
    std::cout << "Dog copy assigment operator called" << std::endl;
    return *this;
}