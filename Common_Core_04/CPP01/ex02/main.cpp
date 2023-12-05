/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:25:01 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/14 09:57:16 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
std::string	string = "HI THIS IS BRAIN";
std::string	*stringPTR = &string;
std::string &stringREF = string;

std::cout << "string adress: " << &string <<  std::endl;
std::cout << "stringPTR adress: " << stringPTR << std::endl;
std::cout << "stringREF adress: " << &stringREF << std::endl;
std::cout << "string value: " << string << std::endl;
std::cout << "stringPTR value: " << *stringPTR << std::endl;
std::cout << "stringREF value: " << stringREF << std::endl;
}