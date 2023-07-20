/*
Retorna um ponteiro para a última ocorrência de um char numa string
*/
#include <stdio.h>

char *ft_strrchr(char *str, char c)
{
	char *last;

	last = 0;
	while (*str)
	{
		if (*str == c)
		{
			last = str;
		}
		str++;
	}
	return last;
}

int main(void)
{
	char *s1 = "abcdefgijklm";
	printf("%s\n", ft_strrchr(s1, 'j'));
}
