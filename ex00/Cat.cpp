/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:15:29 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/03 17:15:30 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
    this->_type = "Cat";
    std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src) {
    *this = src;
    std::cout << "Copy Cat constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;   
}

void Cat::makeSound() const {
    std::cout << "Miaouh!" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs) {
    this->_type = rhs._type;
    std::cout << "Cat copy assigment operator called" << std::endl;
    return *this;
}