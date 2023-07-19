/*
	The bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s,
	by writing zeros (bytes containing '\0') to that area.
*/

#include <string.h>
#include <stdio.h>
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *s2 = (unsigned char *)s;
	while (*s2 && n--)
	{
		*s2 = '\0';
		s2++;
	}
}

int main(void)
{
	char str[] = "Have a nice day!";
	puts(str);
	ft_bzero(str + 5, 4);
	puts(str);
}

