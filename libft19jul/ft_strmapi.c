#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	// char const *s2 = ft_strdup(s);
	char *s2 = malloc(ft_strlen(s) + 1);
	int i;

	i = 0;
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return s2;
}

char upp(unsigned int idx, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return c;
}

int main(void)
{
	char s1[] = "Indisponívelx";

	printf("Resultado: %s\n", ft_strmapi(s1, upp));
}
