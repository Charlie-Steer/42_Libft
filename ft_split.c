/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cargonz2 <cargonz2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:14:37 by cargonz2          #+#    #+#             */
/*   Updated: 2024/01/08 20:09:00 by cargonz2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*cpy_str(char *substr, char *substr_end)
{
	char *newstr;

	while (substr[i] != substr_end)
	{
		i++;
	}
	newstr = malloc(i * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_strlcpy(newstr, substr, i + 1);
		return (newstr);
	}
}

char	**ft_split(char const *s, char c);
{
	int i;
	int j;
	char *separator;
	char *substr;

	i = 0;
	j = 0;

	substr = s;
	substr_end = ft_strchr(s, c);
	cpy_str(substr, substr_end);

	substr(s, strlen());
	ft_memmove();
}
