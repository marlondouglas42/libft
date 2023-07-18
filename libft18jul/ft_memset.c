
/*
	The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.

	@return function returns a pointer to the memory area s.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *s2;
	
	s2 = (unsigned char *)s;
	while (n--)
	{
		*s2 = (unsigned char)c;
		s2++;
	}
	return s;
}

void test_str(char *s1, int c, size_t n)
{
		char s2[50];
		strcpy(s2, s1);
		puts(s2);
		ft_memset(s2, c, n);
		puts(s2);
		puts("");
}
#TODO: Compare results to original function
int main()
{
	test_str("This is string.h library function", '$', 5);
	test_str("Buenos dias, senor!", '#', 12);

	return 0;
}
