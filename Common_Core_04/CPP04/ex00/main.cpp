/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:46:16 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/23 08:50:38 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* animal = new Animal();
const Animal* dog = new Dog();
const Animal* cat = new Cat();
std::cout << std::endl;

std::cout << dog->getType() << " " << std::endl;
std::cout << cat->getType() << " " << std::endl;
dog->makeSound();
cat->makeSound();
animal->makeSound();
std::cout << std::endl;

const WrongAnimal* wrong_animal = new WrongAnimal();
const WrongAnimal* wrong_cat = new WrongCat();
std::cout << wrong_cat->getType() << " " << std::endl;
wrong_cat->makeSound();
wrong_animal->makeSound();
std::cout << std::endl;

delete animal;
delete dog;
delete cat;
delete wrong_animal;
delete wrong_cat;
}