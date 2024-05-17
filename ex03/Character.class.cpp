/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:05:22 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/17 17:35:04 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

Character::Character() {
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    this->_inv_counter = 0;
    std::cout << "ICharacter default constructor called" << std::endl;
}

Character::Character(Character const &src) {
    delete this->_inventory;
    this->_name = src._name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = src._inventory[i];
    std::cout << "ICharacter copy constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name) {
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    this->_inv_counter = 0;
    std::cout << "ICharacter constructor called" << std::endl;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        delete this->_inventory[i];
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

void Character::equip(AMateria* m)
{
    int i = 0;

    while (i < 4)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            this->_inv_counter++;
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
    if (idx >= 0 && idx <= 4)
        this->_inventory[idx]->use(target);
    return ;
}
