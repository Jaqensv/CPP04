/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-lang <mde-lang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:23:38 by mde-lang          #+#    #+#             */
/*   Updated: 2024/06/03 18:03:19 by mde-lang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int animals = 10;
    const Animal* animal_tab[animals];
    int a = 0;
    int dog = 0;
    int cat = 0;

    while (a < animals)
    {
        if (a < animals / 2)
        {
            animal_tab[a] = new Dog();
            dog++;
        }
        else
        {
            animal_tab[a] = new Cat();
            cat++;
        }
        a++;
    }
    std::cout << "dog * " << dog << std::endl;
    std::cout << "cat * " << cat << std::endl;

    const WrongAnimal* meta = new WrongAnimal();
    const Animal* j = new Dog();
    //const WrongAnimal* i = new WrongCat();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    while (a-- > 0)
    {
        delete animal_tab[a];
    }
    delete j;
    delete i;
    delete meta;

    // Animal instance;

    // (void) instance;

    return 0;
}
