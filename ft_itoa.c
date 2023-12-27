/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cargonz2 <cargonz2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:10:50 by cargonz2          #+#    #+#             */
/*   Updated: 2023/12/15 22:46:17 by cargonz2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		is_negative;
	char	*str;

	is_negative = 0;
	len = intlen(n);
	if (n < 0)
		is_negative = 1;
	str = malloc((len + 1 + is_negative) * sizeof(char));
	if (n == -2147483648)
	{
		ft_strlcpy(str, "-2147483648\0", 12);
		return (str);
	}
	else if (n < 0)
	{
		n = -n;
		is_negative = 1;
	}

	if (str == NULL)
		return (NULL);

	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (is_negative)
	{
		str[0] = '-';
		len++;
	}
	str[len] = '\0';
	len--;
	while (n != 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (str);
}
