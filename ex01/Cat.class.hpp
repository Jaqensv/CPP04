/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:16:44 by mde-lang          #+#    #+#             */
/*   Updated: 2024/05/13 12:05:40 by mde-lang         ###   ########.fr       */
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
    void makeSound() const;
private:
    Brain *_brain;
};

#endif