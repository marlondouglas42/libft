/*
DESCRIPTION
	The atoi() function converts the initial portion of the string pointed to by nptr to int.
*/

int ft_isdigit(int c);

static int ft_isspace(const char c)
{
	return (c == ' ' || c == '\n'|| c == '\t');
}

int ft_atoi(const char *nptr)
{
	int result;
	int sign;

	result = 0;
	sign = 1;

	while (ft_isspace(*nptr))
	{
		nptr++;
	}

	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		{
			sign *= -1;
		}
		nptr++;
	}

	while (ft_isdigit(*nptr))
	{
		result *= 10;
		result += *nptr - '0';
		nptr++;
	}

	return (result * sign);
}

#include <stdio.h>

int main(void)
{
	printf("Numero 1: %d \n", ft_atoi("123"));
	printf("Numero 1: %d \n", ft_atoi("    123"));
	printf("Numero 1: %d \n", ft_atoi("    \n12t3"));
	printf("Numero 1: %d \n", ft_atoi("9897b1"));
	printf("Numero 1: %d \n", ft_atoi("\n\n\n\n\t    -728x96"));
}
