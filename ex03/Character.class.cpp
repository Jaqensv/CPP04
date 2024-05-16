/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:05:22 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/16 17:31:30 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

Character::Character() {
    std::cout << "ICharacter default constructor called" << std::endl;
}

Character::Character(Character const &src) {
    delete this->_inventory;
    this->_name = src._name;
    this->_inventory = src._inventory;
    std::cout << "ICharacter copy constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name) {
    std::cout << "ICharacter constructor called" << std::endl;
}

Character::~Character() {
    std::cout << "ICharacter destructor called" << std::endl;
}

Character &Character::operator=(Character const &rhs) {
    delete this->_inventory;
    this->_name = rhs._name;
    this->_inventory = rhs._inventory;
    std::cout << "ICharacter copy assigment operator called" << std::endl;
}

////////////////////////////////////////////////////////////////////////////

std::string const &Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria* m) {
    
}

void Character::unequip(int idx) {
    
}

void Character::use(int idx, ICharacter& target) 
{
    if (idx >= 0 && idx <= 4)
        this->_inventory[idx]->use(target);
    return ;
}
