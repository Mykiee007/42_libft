/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:51:23 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/12/18 11:59:25 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;

	if (s == NULL)
		return (write(1, "(null)", 6));
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int a)
{
	int	count;

	if (a == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	count = 0;
	if (a < 0)
	{
		count += ft_putchar('-');
		a = -a;
	}
	if (a > 9)
		count += ft_putnbr(a / 10);
	count += ft_putchar ((a % 10) + '0');
	return (count);
}

int	ft_putunsigned(unsigned int a)
{
	int	count;

	count = 0;
	if (a < 0)
		a = -a;
	else if (a > 9)
		count += ft_putunsigned(a / 10);
	count += ft_putchar ((a % 10) + '0');
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}

