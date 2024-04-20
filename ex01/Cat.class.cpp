/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:15:29 by mde-lang          #+#    #+#             */
/*   Updated: 2024/04/16 03:20:12 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat() {
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
    std::cout << "Cat copy assigment operator called" << std::endl;
    return *this;
}