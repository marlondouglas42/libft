/*
DESCRIPTION
	The  memmove()  function  copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.

RETURN VALUE
	The memmove() function returns a pointer to dest.
*/
#include "libft.h"

#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    // Copiando os primeiros 6 caracteres da área de memória source para destination
    memcpy(destination, source, 6);

    // Modificando os dados na área de memória source
    source[0] = 'G';

    // Imprimindo os resultados
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
