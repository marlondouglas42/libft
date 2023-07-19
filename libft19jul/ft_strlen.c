#include "libft.h"

size_t ft_strlen(const char *s)
{
  int total;

  total = 0;
  while (*s)
  {
    total++;
    s++;
  }
  return (total);
}