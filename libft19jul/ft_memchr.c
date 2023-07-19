/*
	The  memchr()  function scans the initial n bytes of the memory area pointed to by s for the first instance of c.
	Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.

	The memchr() and memrchr() functions return a pointer to the matching byte or NULL if the character does not occur in the given memory area.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s1 = (unsigned char *)s;
	unsigned char uc = (unsigned char)c;

	while(*s1 && n--)
	{
		if (*s1 == c)
		{
			return s1;
		}
		s1++;
	}
	return 0;
}

int main(void)
{
	char abc[100] = "11 e ônibus";
	puts(abc);
	char *abc2;
	abc2 = ft_memchr(abc, 'e', 4);
	if (abc2)
	{
		puts(abc2);
	}
}
