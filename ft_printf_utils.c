/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:44:18 by caeduard          #+#    #+#             */
/*   Updated: 2021/12/12 13:42:40 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

char	*ft_itoh(unsigned long long n, int letter)
{
	unsigned long long	nbr;
	int					digits;
	char				*dest;

	nbr = n;
	digits = 1;
	while (n / 16 != 0 && digits++)
		n = n / 16;
	dest = malloc(digits + 1);
	if (!dest)
		return (NULL);
	dest[digits] = '\0';
	while (digits > 0 && digits--)
	{
		if ((nbr % 16) <= 9)
			dest[digits] = (nbr % 16) + '0';
		else
			dest[digits] = (nbr % 16) - 10 + letter;
		nbr = nbr / 16;
	}
	return (dest);
}

char	*ft_strchr(const char *s, int c)
{
	if (!*s || !c)
		return (NULL);
	while (*s != (unsigned char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

char	*ft_itoa(int n)
{
	unsigned int	neg;
	long long int	nbr;
	int				digits;
	char			*dest;

	neg = n < 0;
	nbr = n;
	if (neg)
		nbr = nbr * -1;
	digits = 1;
	while (n / 10 != 0 && digits++)
		n = n / 10;
	dest = malloc(neg + digits + 1);
	if (!dest)
		return (NULL);
	dest[neg + digits] = '\0';
	if (neg)
		dest[0] = '-';
	while (digits > 0 && digits--)
	{
		dest[neg + digits] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (dest);
}

char	*ft_uitoa(unsigned int n)
{
	long long int	nbr;
	int				digits;
	char			*dest;

	nbr = n;
	digits = 1;
	while (n / 10 != 0 && digits++)
		n = n / 10;
	dest = malloc(digits + 1);
	if (!dest)
		return (NULL);
	dest[digits] = '\0';
	while (digits > -1 && digits--)
	{
		dest[digits] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (dest);
}
