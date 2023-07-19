#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int i;
	char *s2;
	size_t size;
	int s_len;
	char *ptr_s2;

	s_len = ft_strlen(s) - start;
	if (s_len < len)
	{
		size = s_len;
	} else {
		size = len;
	}
	if (!size)
	{
		return (0);
	}
	s2 = (char *)malloc(size + 1);
	ptr_s2 = s2;
	i = 0;
	while (*s && i < start)
	{
		s++;
		i++;
	}
	while (*s && start < len)
	{
		*s2 = *s;
		s2++;
		s++;
		start++;
	}
	*s2 = '\0';
	return ptr_s2;
}

int main(void)
{
	char str1[] = "Buenos dias, senor!";
	char *substr;

	printf("Substr: %s\n", ft_substr(str1, 0, ft_strlen(str1)));
}
