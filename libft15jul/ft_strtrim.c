// ft_strtrim.c

#include "libft.h"

char *ft_strtrim(const char *s1, const char *set)
{
  size_t start;
  size_t end;
  char *trimmed;

  if (!s1 || !set)
    return (NULL);
  start = 0;
  while (s1[start] && ft_strchr(set, s1[start]))
    start++;
  end = ft_strlen(s1);
  while (end > start && ft_strchr(set, s1[end - 1]))
    end--;
  trimmed = ft_substr(s1, start, end - start);
  return (trimmed);
}
