/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:23:00 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/03 18:08:32 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

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
    std::cout << "Ice copy assigment operator called" << std::endl;
    return (*this);
    
}

AMateria *Ice::clone() const {
    AMateria* ice = new Ice();
    return ice;
}