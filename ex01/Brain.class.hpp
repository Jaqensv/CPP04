#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>

class Brain {

public:
    Brain();
    Brain(Brain const &src);
    ~Brain();
    std::string ideas [100];
    Brain &operator=(Brain const &rhs);
};

#endif