// ft_strmapi.c

#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
  size_t len;
  char *result;
  size_t i;

  if (!s || !f)
    return (NULL);
  len = ft_strlen(s);
  result = (char *)malloc(sizeof(char) * (len + 1));
  if (!result)
    return (NULL);
  i = 0;
  while (i < len)
  {
    result[i] = f(i, s[i]);
    i++;
  }
  result[i] = '\0';
  return (result);
}
