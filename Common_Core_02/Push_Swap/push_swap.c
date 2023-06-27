/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:45:00 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/19 11:49:43 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	lst;

	if (argc < 2)
		return (write(1, "Error : Wrong number of arguments !\n", 37));
	else if (argc == 2)
	{
		if (check_one_arg(argv) == FALSE)
			return (write(1, "Error : Only numbers in arguments !\n", 36));
		fill_tab_1(argv, &lst);
	}
	else if (argc > 2)
	{
		check_more_arg(argc, argv);
		fill_tab_2(argc, argv, &lst);
	}
	check_doublon(&lst);
	check_sort(&lst);
	check_case(&lst);
	ft_algo(&lst);
}
