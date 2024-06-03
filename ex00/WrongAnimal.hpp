/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:15:52 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/03 15:52:44 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &src);
    ~WrongAnimal();
    WrongAnimal &operator=(WrongAnimal const &rhs);
    void makeSound() const;
    std::string getType() const;
protected:
    std::string _type;
};

#endif
