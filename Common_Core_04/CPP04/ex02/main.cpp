/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:46:16 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/23 09:58:54 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const AAnimal* dog = new Dog();
const AAnimal* cat = new Cat();
std::cout << std::endl;

delete dog;
delete cat;
std::cout << std::endl;

const AAnimal* animal[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
std::cout << std::endl;

for (int i = 0; i < 4; i++)
	delete animal[i];

//Does not work because it's an abstract class
// const AAnimal* animal2 = new AAnimal();


return 0;
}