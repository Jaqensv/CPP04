/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:30:25 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/03 14:44:21 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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

void Animal::makeSound() const {
    return ;
}

std::string Animal::getType() const {
    return this->_type;
}

Animal &Animal::operator=(Animal const &rhs) {
    this->_type = rhs._type;
    std::cout << "Copy assigment operator called" << std::endl;
    return *this;
}