#include "libft.h"
#include <stddef.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char *ptr_inicio = src;

	while (*src && --size)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';

	return ft_strlen(ptr_inicio);
}
#include <stdio.h>

// int main()
// {
// 	char src[] = "Hello, world! Outline timeline makefile abc";
// 	char dst[12];

// 	printf("Copied Length: %zu\n", ft_strlcpy(dst, src, 12));
// 	printf("Copied: %s\n", dst);

// 	return 0;
// }

