/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:15:29 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/03 17:52:24 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    this->_brain = new Brain();
    this->_type = "Cat";
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src) {
    this->_type = src._type;
	this->_brain = new(Brain);
	*_brain = *src._brain;
    std::cout << "Copy Cat constructor called" << std::endl;
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << "Cat destructor called" << std::endl;   
}

void Cat::makeSound() const {
    std::cout << "Miaouh!" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
    Animal::operator=(rhs);
	*this->_brain = *rhs._brain;
    std::cout << "Cat copy assigment operator called" << std::endl;
    return *this;
}