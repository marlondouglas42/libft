/*
  The strrchr() function returns a pointer to the last occurrence of the character c in the string s.

  The  strchr()  and  strrchr()  functions return a pointer to the matched character or NULL if the character is not found.
  The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.
*/
#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
  char *last;

  last = NULL;
  while (*s)
  {
    if (*s == c)
    {
      last = (char *)s;
    }
    s++;
  }
  if (*s == c)
  {
    last = (char *)s;
  }
  return (last);
}
