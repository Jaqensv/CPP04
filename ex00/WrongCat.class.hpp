/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:25:04 by mde-lang          #+#    #+#             */
/*   Updated: 2024/04/16 17:18:36 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

# include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal {

public:
    WrongCat();
    WrongCat(WrongCat const &src);
    ~WrongCat();
    WrongCat &operator=(WrongCat const &rhs);
    void makeSound() const;
};

#endif