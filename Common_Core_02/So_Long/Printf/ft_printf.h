/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:59:07 by abarbieu          #+#    #+#             */
/*   Updated: 2023/04/25 13:20:00 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

# define TRUE 1
# define FALSE 0

int	ft_printf(const char *str, ...);
int	ft_c(int c);
int	ft_str(char *str);
int	ft_point(unsigned long long point);
int	ft_putnbr(int nb);
int	ft_put_un_int(unsigned int nb);
int	ft_hex(unsigned int nb, char format);

#endif
