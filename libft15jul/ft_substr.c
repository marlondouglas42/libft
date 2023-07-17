// ft_substr.c

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
  size_t s_len;
  char *substr;

  if (!s)
    return (NULL);
  s_len = ft_strlen(s);
  if (start >= s_len)
    return (ft_strdup(""));
  if (len > s_len - start)
    len = s_len - start;
  substr = (char *)malloc(sizeof(char) * (len + 1));
  if (!substr)
    return (NULL);
  ft_memcpy(substr, s + start, len);
  substr[len] = '\0';
  return (substr);
}
