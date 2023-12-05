/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:24:55 by abarbieu          #+#    #+#             */
/*   Updated: 2023/12/05 11:56:01 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	replace(char **av, std::string str)
{
	std::ofstream	outfile;
	int				pos;

	outfile.open((std::string(av[1]) + ".replace").c_str());
	if (outfile.fail())
		return (1);
	for (int i = 0; i < (int)str.size(); i++){
		pos = str.find(av[2], i);
		if (pos != -1 && pos == i)
		{
			outfile << av[3];
			i += std::string(av[2]).size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
	return (0);
}

int	main(int ac, char **av)
{
	std::ifstream	infile;
	std::string		str;
	char			c;

	if (ac != 4){
		std::cout << "Only three parameters ! (filename, s1, s2)" << std::endl;
		return (1);
	}
	infile.open(av[1]);
	if (infile.fail()){
		std::cout << "No such file or directory: " << av[1] << std::endl;
		return (1);
	}
	while (!infile.eof() && infile >> std::noskipws >> c)
		str += c;
	infile.close();
	return (replace(av, str));
}