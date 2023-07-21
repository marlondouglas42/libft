#include <stdlib.h>
#include <stdio.h>

static int ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

static int ft_isalpha(int c)
{
  return (c >= '0' && c <= '9');
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
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
		{
			sign *= -1;
		}
		nptr++;
	}
	while (ft_isalpha(*nptr))
	{
		result *= 10;
		result += *nptr - '0';
		nptr++;
	}
	return (result * sign);
}

void test(char *nb)
{
	printf("{%s}\n", nb);
	printf("%d\n", ft_atoi(nb));
	printf("%d\n", atoi(nb));
	printf("------\n");
}

int main(void)
{
	test("0");
	test("42");
	test("+42");
	test("-42");
	test("\n56");
	test("\n-56");
	test("\n\n\t789");
	test("++963");
	test("--963");
	test("-+963");
}
