/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:30:25 by mde-lang          #+#    #+#             */
/*   Updated: 2024/04/12 18:45:13 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal() {
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal const &src) {
    *this = src;
    std::cout << "Copy Animal constructor called" << std::endl;
}

// void Animal::makeSound() {

// }

std::string Animal::getType() const {
    return this->_type;
}