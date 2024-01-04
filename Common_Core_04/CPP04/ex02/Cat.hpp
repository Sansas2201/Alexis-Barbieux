/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:41:32 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/23 09:41:42 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain	*brain;
public:
	Cat();
	Cat(const Cat &cat);
	Cat& operator=(const Cat &cat);
	~Cat();

	void	makeSound() const;
};

#endif