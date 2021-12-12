/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:44:21 by caeduard          #+#    #+#             */
/*   Updated: 2021/12/12 13:42:44 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	functions_flags(va_list args, int flag)
{
	int	print;

	print = 0;
	if (flag == 'c')
		print = ft_print_cdi (va_arg(args, int), 1);
	else if (flag == 's')
		print = ft_print_s (va_arg(args, char *));
	else if (flag == '%')
		print = ft_print_cdi (flag, 1);
	else if (flag == 'd' || flag == 'i')
		print = ft_print_cdi (va_arg(args, int), 2);
	else if (flag == 'u')
		print = ft_print_u (va_arg(args, unsigned int));
	else if (flag == 'x')
		print = ft_print_x (va_arg(args, unsigned int), 'a');
	else if (flag == 'X')
		print = ft_print_x (va_arg(args, unsigned int), 'A');
	else if (flag == 'p')
		print = ft_print_p (va_arg(args, unsigned long long), 'a');
	return (print);
}

int	ft_printf(const char *string, ...)
{
	int		print;
	va_list	flags;

	va_start(flags, string);
	print = 0;
	while (*string)
	{
		if (*string == '%' && ft_strchr ("cspdiuxX%", string[1]))
		{
			print = functions_flags(flags, string[1]) + print;
			string = string + 2;
		}
		else
		{
			ft_putchar_fd(*string, 1);
			print = print + 1;
			string = string + 1;
		}
	}
	va_end(flags);
	return (print);
}
