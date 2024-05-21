/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:16:52 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/21 19:47:05 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &src) {
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {
    std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &rhs) {
    if (this != &rhs)
        this->_materiaType = rhs._materiaType;
    return (*this);
    std::cout << "Cure copy assigment operator called" << std::endl;
}

AMateria* Cure::clone() const {
    AMateria* cure = new Cure();
    return cure;
}