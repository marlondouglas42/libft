/*
DESCRIPTION
	The strnstr() function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.Characters that appear after a ‘\0’ character are not searched.
	Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.

RETURN VALUES
	If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned;
	otherwise a pointer to the first character of the first occurrence of little is returned.
*/

#include "libft.h"
#include <stdio.h>

char * ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!little)
	{
		return (char *)big;
	}

	int i;
	int j;

	i = 0;
	while (big[i])
	{
		j = 0;
		while (little[j] && len--)
		{
			j++;
		}
		if (len == 0)
		{
			return (char *)(big + i);
		}
		i++;
	}

	return 0;
}

int main(void)
{
	char abc[] = "De todos os ângulos";

	printf("Abc: %s\n", abc);

	char *substr = ft_strnstr(abc, "os", ft_strlen(abc));

	if (substr)
	{
		printf("Achado: %s\n", substr);
	}
}
