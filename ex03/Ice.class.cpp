/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:23:00 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/14 14:45:59 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"

Ice::Ice() {
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &src) {
    std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice() {
    std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs) {
    std::cout << "Ice copy assigment operator called" << std::endl;
}

Ice *Ice::clone() const {
    Ice *ice = new Ice();
    return ice;
}