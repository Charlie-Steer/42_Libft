/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cargonz2 <cargonz2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:14:37 by cargonz2          #+#    #+#             */
/*   Updated: 2024/01/16 17:01:47 by cargonz2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	word_count;
	int		found_separator;
	int		found_word;
	size_t	i;

	word_count = 0;
	found_word = 0;
	found_separator = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			found_separator = 1;
			found_word = 0;
		}
		else if (!found_word)
		{
			found_separator = 0;
			found_word = 1;
			word_count++;
		}
		i++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	size_t	word_len;
	size_t	i;
	size_t	j;

	word_count = count_words(s, c);
	word_len = 0;
	i = 0;
	j = 0;

	char **str_arr = malloc(sizeof(char *) * (word_count + 1));
	if (str_arr == NULL)
		return (NULL);

	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			i++;
		}
		while (s[i] != c && s[i] != '\0')
		{
			word_len++;
			i++;
		}
		if (word_len != 0)
		{
			//printf("test\n");
			str_arr[j] = ft_substr(s, i - word_len, word_len);
			//printf("i: %lu,	word_len: %lu\n", i, word_len);
			//printf("%s\n", str_arr[j]);
			j++;
			word_len = 0;
		}
	}
	str_arr[j] = NULL;
	return (str_arr);
}
