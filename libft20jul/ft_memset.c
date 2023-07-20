#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (s);
}

int main(void)
{
	char palavra[] = "Palavra original";
	printf("P: %s\n", palavra);
	ft_memset(palavra, 'x', sizeof(palavra) - 1);
	printf("P2: %s\n", palavra);
}
