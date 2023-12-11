/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cargonz2 <cargonz2@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:33:33 by cargonz2          #+#    #+#             */
/*   Updated: 2023/12/11 16:06:14 by cargonz2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h> //DELETE

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		printf("%c", s[start + i]);
		i++;
	}
	
	substr = malloc((i - ((size_t)start)) * sizeof(char));

	*substr = memmove();
	
	if (substr == NULL)
		return (NULL);
	else
		return (substr);
}

int main(void)
{
	char s[] = "Hello, what's up?";
	printf("%s\n", ft_substr(s, 7, 5));
}
