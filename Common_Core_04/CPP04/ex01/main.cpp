/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:46:16 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/23 09:31:14 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* dog = new Dog();
const Animal* cat = new Cat();
std::cout << std::endl;

delete dog;
delete cat;
std::cout << std::endl;

const Animal* animal[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
std::cout << std::endl;

for (int i = 0; i < 4; i++)
	delete animal[i];

return 0;
}