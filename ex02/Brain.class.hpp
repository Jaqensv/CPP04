#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>
# include "Animal.class.hpp"

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