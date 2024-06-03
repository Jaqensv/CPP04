/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:00:54 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/03 17:51:08 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    this->_brain = new Brain();
    this->_type = "Dog";
    std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src) {
    this->_type = src._type;
	this->_brain = new(Brain);
	*_brain = *src._brain;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
    delete this->_brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Ouaf ouaf!" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs) {
	Animal::operator=(rhs);
	*this->_brain = *rhs._brain;
    std::cout << "Dog copy assigment operator called" << std::endl;
    return *this;
}