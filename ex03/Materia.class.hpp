/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:58:15 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/21 19:39:29 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_CLASS_HPP
# define MATERIA_CLASS_HPP

# include <iostream>

class ICharacter;

class AMateria {

public:
    AMateria();
    AMateria(AMateria const &src);
    ~AMateria();
    AMateria &operator=(AMateria const &rhs);
    /////////////////////////////////////////////////////////////
    AMateria(std::string const & type);
    std::string const & getType() const; // return materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
protected:
    std::string _materiaType;
};

class IMateriaSource {

public:
    virtual ~IMateriaSource();
    ///////////////////////////////////////////////////////////////
    virtual void learnMateria(AMateria* materia) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {

public:
    MateriaSource();
    MateriaSource(MateriaSource const &src);
    virtual ~MateriaSource();
    MateriaSource &operator=(MateriaSource const &rhs);
    ///////////////////////////////////////////////////////////////
    virtual void learnMateria(AMateria* materia);
    virtual AMateria* createMateria(std::string const & type);
private:
    AMateria *_materia[4];
};


#endif