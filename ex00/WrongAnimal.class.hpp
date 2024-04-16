/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:15:52 by mde-lang          #+#    #+#             */
/*   Updated: 2024/04/16 17:18:18 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

# include <iostream>

class WrongAnimal {

public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &src);
    ~WrongAnimal();
    WrongAnimal &operator=(WrongAnimal const &rhs);
    void makeSound() const;
    std::string getType() const;
private:
    std::string _type;
};

#endif

