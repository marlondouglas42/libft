/*
DESCRIPTION
	The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.

RETURN
	The memcmp() function returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2.

	For a nonzero return value, the sign is determined by the sign of the difference between the first pair of bytes (interpreted as unsigned char) that differ in s1 and s2.

	If n is zero, the return value is zero.
*/

#include "libft.h"
#include <stdio.h>

// int ft_strncmp(const char *s1, const char *s2, size_t n);

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *w1 = (const char *)s1;
	const char *w2 = (const char *)s2;

	return ft_strncmp(w1, w2, n);
}

int main()
{
	// Caso de teste 1: Comparando duas strings iguais
	const char *str1 = "Hello, World!";
	const char *str2 = "Hello, World!";
	int result1 = ft_memcmp(str1, str2, 10);
	printf("Caso de teste 1: Comparando duas strings iguais\n");
	printf("Resultado: %d\n\n", result1);

	// Caso de teste 2: Comparando duas strings diferentes
	const char *str3 = "Hello";
	const char *str4 = "World";
	int result2 = ft_memcmp(str3, str4, 5);
	printf("Caso de teste 2: Comparando duas strings diferentes\n");
	printf("Resultado: %d\n\n", result2);

	// Caso de teste 3: Comparando parte de uma string com ela mesma
	const char *str5 = "Hello, World!";
	const char *str6 = "Hello";
	int result3 = ft_memcmp(str5, str6, 5);
	printf("Caso de teste 3: Comparando parte de uma string com ela mesma\n");
	printf("Resultado: %d\n\n", result3);

	return 0;
}
