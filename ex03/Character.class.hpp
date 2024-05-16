/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:05:24 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/16 16:31:32 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <iostream>
# include "Materia.class.hpp"

// # include <cstring> // strcmp

class ICharacter {

public:
    virtual ~ICharacter(); // pour obliger les classe heritantes a appeler leur propre destructeur
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter {

public:
    Character();
    Character(Character const &src);
    Character(std::string name);
    Character &operator=(Character const &rhs);
    virtual ~Character(); // pour obliger les classe heritantes a appeler leur propre destructeur
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
    //AMateria* ground[4];
private:
    std::string _name;
    AMateria* _inventory[4];
};




#endif