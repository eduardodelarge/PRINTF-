/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:44:15 by caeduard          #+#    #+#             */
/*   Updated: 2021/12/12 13:42:33 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_cdi(int c, int type)
{
	int		counter;
	char	*string;

	if (type == 1)
	{
		ft_putchar_fd(c, 1);
		return (1);
	}
	string = ft_itoa(c);
	counter = ft_print_s(string);
	free(string);
	return (counter);
}

int	ft_print_s(char *string)
{
	int	counter;

	if (!string)
		return (ft_print_s("(null)"));
	counter = 0;
	while (*string)
	{
		ft_putchar_fd(*string, 1);
		string++;
		counter++;
	}
	return (counter);
}

int	ft_print_p(unsigned long long c, int letter)
{
	int		counter;
	char	*string;

	string = ft_itoh(c, letter);
	ft_print_s ("0x");
	counter = ft_print_s (string) + 2;
	free (string);
	return (counter);
}

int	ft_print_u(unsigned int c)
{
	int		counter;
	char	*string;

	string = ft_uitoa (c);
	counter = ft_print_s (string);
	free (string);
	return (counter);
}

int	ft_print_x(unsigned int c, int letter)
{
	int		counter;
	char	*string;

	string = ft_itoh (c, letter);
	counter = ft_print_s (string);
	free (string);
	return (counter);
}
