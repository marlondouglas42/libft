#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

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

int main(void)
{
	char *s1 = "Essa string será separada pelos espaços.";
	char **s1_separados = ft_split(s1, ' ');
	int i = 0;

	while(s1_separados[i] != NULL)
	{
		printf("s1[%d]: %s \n", i, s1_separados[i]);
		i++;
	}
}
