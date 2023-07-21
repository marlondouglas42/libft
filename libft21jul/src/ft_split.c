/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madougla <madougla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:59:11 by madougla          #+#    #+#             */
/*   Updated: 2023/07/21 15:00:23 by madougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

static size_t count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char **ft_split(const char *s, char c)
{
	size_t words_count;
	char **result;
	char *t;
	int i;
	int j;
	int m;

	if (!s)
		return (NULL);

	words_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words_count + 1));

	if (!result)
		return (NULL);

	i = 0;
	j = 0;
	m = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			t = ft_substr(s, j, i);
			j = i + 1;
			result[m] = t;
			m++;
		}
		i++;
	}
	if (i > j) // Verifica se há um restinho
	{
		t = ft_substr(s, j, i);
		result[m] = t;
		m++;
	}
	result[m] = NULL;
	return (result);
}
