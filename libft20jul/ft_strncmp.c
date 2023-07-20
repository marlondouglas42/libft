#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

int main(void)
{
	char *s1 = "abC";
	char *s2 = "abc";
	printf("Comparação: %d\n", ft_strncmp(s1, s2, 2));
	printf("Comparação (original): %d\n", strncmp(s1, s2, 2));
	printf("Comparação: %d\n", ft_strncmp(s1, s2, 3));
	printf("Comparação (original): %d\n", strncmp(s1, s2, 3));
}
