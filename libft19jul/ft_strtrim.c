#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// char *ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}

static int	ft_isspace(const char c)
{
	return (c == ' ' || c == '\n'|| c == '\t');
}

static int ft_isinset(const char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int len;
	int i;
	int end;
	int size;

	i = 0;
	len = 0;
	size = ft_strlen(s1);
	end = size;
	while (ft_isinset(s1[i], set))
	{
		i++;
	}
	start = i;
	len = size - 1 - start;
	while (!ft_isinset(s1[end], set))
	{
		len--;
		end--;
	}

	return ft_substr(s1, start, len + 1);	 
}

int main(void)
{
	char *set = " \n\t_-";
	char *s1 = "\t\t\t\txxOlá, buenos dias!xx-hjk";
	printf("s1: %s \ns1 (trimmed): %s\n", s1, ft_strtrim(s1, set));
}
