/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:16:52 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/14 14:50:55 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"

Cure::Cure() {
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &src) {
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {
    std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &rhs) {
    std::cout << "Cure copy assigment operator called" << std::endl;
}

Cure *Cure::clone() const {
    Cure *cure = new Cure();
    return cure;
}