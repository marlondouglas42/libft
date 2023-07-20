#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (0);
	while (i < nmemb * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}

int main(void)
{
	char *bloco = (char *)ft_calloc(3, 4);
	int size = 3 * 4;
	while (size--)
	{
		printf("N: %d\n", *bloco);
		bloco++;
	}
}

