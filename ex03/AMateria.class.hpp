/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:58:15 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/14 16:12:23 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include <iostream>
# include "ICharacter.class.hpp"

class AMateria {

protected:
    
public:
    AMateria();
    AMateria(AMateria const &src);
    ~AMateria();
    AMateria &operator=(AMateria const &rhs);
    AMateria(std::string const & type);
    std::string const & getType() const; // return materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
private:
    std::string _materia;
};

class IMateriaSource {

public:
    IMateriaSource();
    IMateriaSource(IMateriaSource const &src);
    virtual ~IMateriaSource();
    IMateriaSource &operator=(IMateriaSource const &rhs);
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif