/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:59:24 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/14 16:27:44 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

AMateria::AMateria() {
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src) {
    this->_materia = src.getType();
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const {
    return this->_materia;
}

AMateria &AMateria::operator=(AMateria const &rhs) {
    this->_materia = rhs._materia;
    std::cout << "AMateria copy assigment operator called" << std::endl;
    return *this;
}

void AMateria::use(ICharacter& target) {
    
}



////////////////////////////////////////////////////////////////////////////////

IMateriaSource::IMateriaSource() {
    std::cout << "IMateriaSource default constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &src) {
    std::cout << "IMateriaSource copy constructor called" << std::endl;
}

IMateriaSource::~IMateriaSource() {
    std::cout << "IMateriaSource destructor called" << std::endl;
}

IMateriaSource &IMateriaSource::operator=(IMateriaSource const &rhs) {
    std::cout << "IMateriaSource copy assigment operator called" << std::endl;
}