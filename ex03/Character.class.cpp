/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:05:22 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/21 20:15:28 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"
#include "Materia.class.hpp"

Character::Character() {
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
        this->_ground[i] = NULL;
    }
    std::cout << "ICharacter default constructor called" << std::endl;
}

Character::Character(Character const &src) {
    this->_name = src._name;
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = src._inventory[i];
        this->_ground[i] = src._ground[i];
    }
    std::cout << "ICharacter copy constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name) {
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
        this->_ground[i] = NULL;
    }
    std::cout << "ICharacter constructor called" << std::endl;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
    {
        delete this->_inventory[i];
        delete this->_ground[i];
    }
    std::cout << "ICharacter destructor called" << std::endl;
}

Character &Character::operator=(Character const &rhs) {
    this->_name = rhs._name;
    std::cout << "ICharacter copy assigment operator called" << std::endl;
    return *this;
}

////////////////////////////////////////////////////////////////////////////

std::string const &Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria* m)
{
    int i = 0;

    while (i < 4)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            return ;
        }
        i++;
    }
    return ;
}

void Character::unequip(int idx)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_ground[i] == NULL)
        {
            this->_ground[i] = this->_inventory[idx];
            this->_inventory[idx] = nullptr;
            return ;
        }
    }
    return ;
}

void Character::use(int idx, ICharacter& target) 
{
    if (this->_inventory[idx])
        this->_inventory[idx]->use(target);
    return ;
}

ICharacter::~ICharacter() {}