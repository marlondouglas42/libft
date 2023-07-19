#include "libft.h"
#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void upp(unsigned int idx, char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= 32;
	}
}

int main(void)
{
	char s1[] = "Indisponívelx";

	ft_striteri(s1, upp);

	printf("Resultado: %s\n", s1);
}