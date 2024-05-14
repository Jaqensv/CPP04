/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:05:22 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/14 16:31:30 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.class.hpp"

ICharacter::ICharacter() {
    std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(ICharacter const &src) {
    std::cout << "ICharacter copy constructor called" << std::endl;
}

ICharacter::~ICharacter() {
    std::cout << "ICharacter destructor called" << std::endl;
}

ICharacter &ICharacter::operator=(ICharacter const &rhs) {
    std::cout << "ICharacter copy assigment operator called" << std::endl;
}

void ICharacter::use(int idx, ICharacter& target) {
    
    
}