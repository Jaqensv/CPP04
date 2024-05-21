/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:23:00 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/21 19:46:34 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &src) {
    this->_materiaType = src.getType();
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice() {
    std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs) {
    if (this != &rhs)
        this->_materiaType = rhs._materiaType;
    return (*this);
    std::cout << "Ice copy assigment operator called" << std::endl;
}

AMateria *Ice::clone() const {
    AMateria* ice = new Ice();
    return ice;
}