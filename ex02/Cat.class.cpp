/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:15:29 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/13 12:11:51 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat() {
    this->_brain = new Brain();
    this->_type = "Cat";
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src) {
    *this = src;
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
    this->_brain = rhs._brain;
    this->_type = rhs._type;
    std::cout << "Cat copy assigment operator called" << std::endl;
    return *this;
}