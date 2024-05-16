/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:59:24 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/16 16:36:21 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.class.hpp"

AMateria::AMateria() {
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src) {
    this->_materiaType = src.getType();
    std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs) {
    this->_materiaType = rhs._materiaType;
    std::cout << "AMateria copy assigment operator called" << std::endl;
    return *this;
}

AMateria::AMateria(std::string const & type) {
    
}

std::string const &AMateria::getType() const {
    return this->_materiaType;
}

void AMateria::use(ICharacter& target) {

    Ice : "* shoots an ice bolt at <name> *"
    Cure : "* heals <name>’s wounds *"
}

////////////////////////////////////////////////////////////////////////////////

MateriaSource::MateriaSource() {
    std::cout << "IMateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src) {
    std::cout << "IMateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource() {
    std::cout << "IMateriaSource destructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
    std::cout << "IMateriaSource copy assigment operator called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* materia) 
{
    int i = 0;
    
    while (i < 4)
    {
        if (this->_materia[i] == NULL)
            this->_materia[i] = materia;
        else
            i++;
    }
    return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type != "ice" && type != "cure")
        return 0;

    AMateria* copy;
    int i = 0;
    
    while (i < 4)
    {
    

        
    }
        
}