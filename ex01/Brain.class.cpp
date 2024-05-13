#include "Brain.class.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const &src) {
    *this = src;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs) {
    std::cout << "Brain copy assigment operator called" << std::endl;
    return *this;
}

