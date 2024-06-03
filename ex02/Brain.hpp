/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:26:21 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/03 17:28:30 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Animal.hpp"

class Brain {

public:
    Brain();
    Brain(Brain const &src);
    ~Brain();
    Brain &operator=(Brain const &rhs);
private:
    std::string _ideas [100];
};

#endif