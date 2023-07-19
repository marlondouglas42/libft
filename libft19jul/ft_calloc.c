/*
	The calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. 

	The memory is set to zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().

	If the multiplication of nmemb and size would  result in integer overflow, then calloc() returns an error.
*/
#include "stdio.h"
#include <stdlib.h>

void *calloc(size_t nmemb, size_t size)
{
	void *bloco;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	bloco = malloc(nmemb * size);
	if (!bloco)
	{
		return (0);
	}
	ptr = bloco;
	while (*ptr)
	{
		*ptr = '0';
		ptr++;
	}
	return (bloco);
}

