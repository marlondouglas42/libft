// ft_strdup.c

#include "libft.h"

char *ft_strdup(const char *s1)
{
  size_t len;
  char *dup;

  len = ft_strlen(s1);
  dup = (char *)malloc(sizeof(char) * (len + 1));
  if (dup)
    ft_memcpy(dup, s1, len + 1);
  return (dup);
}
