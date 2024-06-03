/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:05:22 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/03 18:43:54 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Materia.hpp"

Character::Character() 
{
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
        this->_ground[i] = NULL;
    }
    std::cout << "ICharacter default constructor called" << std::endl;
}

Character::Character(Character const &src) 
{
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = src._inventory[i];
        this->_ground[i] = src._ground[i];
    }
    this->_name = src._name;
    std::cout << "ICharacter copy constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name) 
{
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = NULL;
        this->_ground[i] = NULL;
    }
    std::cout << "ICharacter constructor called" << std::endl;
}

Character::~Character() 
{
    for (int i = 0; i < 4; i++)
    {
        delete this->_inventory[i];
        delete this->_ground[i];
    }
    std::cout << "ICharacter destructor called" << std::endl;
}

Character &Character::operator=(Character const &rhs) 
{
    for (int i = 0; i < 4; i++)
    {
        this->_inventory[i] = rhs._inventory[i];
        this->_ground[i] = rhs._ground[i];
    }
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
            this->_inventory[idx] = NULL;
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