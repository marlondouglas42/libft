#include "libft.h"

#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(const char *s1, const char *s2)
{
	size_t len_s1 = 0;
	size_t len_s2 = 0;

	if (s1)
		len_s1 = ft_strlen(s1);
	if (s2)
		len_s2 = ft_strlen(s2);

	char *s3 = (char *)malloc(len_s1 + len_s2 + 1);

	if (!s3)
		return NULL;

	size_t i = 0;
	while (i < len_s1) {
		s3[i] = s1[i];
		i++;
	}

	size_t j = 0;
	while (j < len_s2) {
		s3[len_s1 + j] = s2[j];
		j++;
	}

	s3[len_s1 + len_s2] = '\0';

	return s3;
}

int main(void)
{
	char p1[] = "oi";
	char p2[] = "mundo";

	printf("Resultado: %s\n", ft_strjoin(p1, p2));
}
