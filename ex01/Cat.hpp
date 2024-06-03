/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:16:44 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/03 17:28:19 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

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