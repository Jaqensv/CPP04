/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:16:44 by mde-lang          #+#    #+#             */
/*   Updated: 2024/04/16 17:09:31 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include "Animal.class.hpp"

class Cat : public Animal {
    
public:
    Cat();
    Cat(Cat const &src);
    ~Cat();
    Cat &operator=(Cat const &rhs);
    void makeSound() const override;
};

#endif