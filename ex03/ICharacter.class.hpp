/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:05:24 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/14 16:22:48 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_CLASS_HPP
# define ICHARACTER_CLASS_HPP

# include <iostream>
# include "AMateria.class.hpp"

class ICharacter {

public:
    ICharacter();
    ICharacter(ICharacter const &src);
    virtual ~ICharacter(); // pour obliger les classe heritantes a appeler leur propre destructeur
    ICharacter &operator=(ICharacter const &rhs);
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
private:
    std::string _name;
    AMateria* _inventory [4];
};


#endif