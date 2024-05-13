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

void Brain::add_idea(std::string idea, unsigned int i)
{
    i = 0;
    this->_ideas[i] = idea;

    while (i < 100) 
    {
        
    }
}
