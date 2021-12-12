/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caeduard <caeduard@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:44:23 by caeduard          #+#    #+#             */
/*   Updated: 2021/12/12 13:42:49 by caeduard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *string, ...);
int		functions_flags(va_list args, int flag);

int		ft_print_cdi(int c, int type);
int		ft_print_s(char *string);
int		ft_print_u(unsigned int c);
int		ft_print_x(unsigned int c, int letter);
int		ft_print_p(unsigned long long c, int letter);

void	ft_putchar_fd(char c, int fd);
char	*ft_itoh(unsigned long long n, int letter);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);

#endif