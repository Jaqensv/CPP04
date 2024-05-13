/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   *A/
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:30:25 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/13 13:45:14 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

AAnimal::AAnimal() {
    std::cout << "Default Animal constructor called" << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src) {
    *this = src;
    std::cout << "Copy Animal constructor called" << std::endl;
}

void AAnimal::makeSound() const {
    return ;
}

std::string AAnimal::getType() const {
    return this->_type;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs) {
    this->_type = rhs._type;
    std::cout << "Copy assigment operator called" << std::endl;
    return *this;
}